#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeters = 0.0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dMeters = iValue * 0.0929;
    return dMeters;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%0.6f\n", dRet);

    return 0;
}
//O(1)