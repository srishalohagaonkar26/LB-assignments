#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers by converting them to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Handle zero explicitly as it has one even digit
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10; // Extract the last digit
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10; // Remove the last digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return 0;
}
//O(N)