#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iProduct = 1;
    int bHasNonZeroDigit = 0; // Tracks if the number contains any non-zero digits

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iProduct = iProduct * iDigit;
            bHasNonZeroDigit = 1;
        }
        iNo = iNo / 10;
    }

    return bHasNonZeroDigit ? iProduct : 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}
//Time Complexity: $O(\log_{10} N)$ where $N$ is iNo.