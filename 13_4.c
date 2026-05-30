#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProd = 1;
    int bHasOdd = 0; // Flag to track if at least one odd element exists

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProd = iProd * Arr[iCnt];
            bHasOdd = 1;
        }
    }

    return bHasOdd ? iProd : 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength.