#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    return (iSumEven - iSumOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
//Time Complexity: $O(\log_{10} N)$ where $N$ is iNo. Both even and odd digit sums are tracked cleanly within a single pass iteration.