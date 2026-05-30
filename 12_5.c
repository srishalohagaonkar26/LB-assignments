#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the target number to count: ");
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

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is %d\n", iValue, iRet);

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength.