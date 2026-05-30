#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    // Loop backwards from the last index down to 0
    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt; // The first match from the back is the last occurrence
        }
    }

    return -1; 
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is at index %d\n", iRet);
    }

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength. Scanning from right to left finds the last occurrence optimally.