#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = -1; // Default to -1 if element is not found

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt; // Store the current index
            break;         // Break immediately to keep the first occurrence
        }
    }

    return iIndex;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the target element to search: ");
    scanf("%d", &iValue);

    if(iSize <= 0)
    {
        printf("Invalid size\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is at index %d\n", iRet);
    }

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength. In the best case, it terminates in $O(1)$ if the number is at index 0.