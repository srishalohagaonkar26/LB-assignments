#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // A single optimized loop up to iNo to calculate both values
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return (iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
//O(N)