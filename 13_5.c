#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0]; // Assume first element is the minimum initial baseline

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt]; // Update baseline if a smaller value is found
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    iRet = Min(p, iSize);

    printf("Smallest number is %d\n", iRet);

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength. Each array index slot is compared exactly once.