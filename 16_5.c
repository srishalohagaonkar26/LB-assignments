#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNum = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iSum = 0;

        while(iNum > 0)
        {
            iSum = iSum + (iNum % 10);
            iNum = iNum / 10;
        }

        printf("%d ", iSum);
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}