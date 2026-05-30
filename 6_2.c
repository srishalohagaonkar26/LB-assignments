#include<stdio.h>

int DollarToINR(int iNo)
{
    int iInrValue = 0;

    // Convert negative value to positive to handle valid transaction volumes
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Conversion rate logic
    iInrValue = iNo * 70;

    return iInrValue;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
//time complexity = O(1)