#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d\n", iRet);

    return 0;
}
//O(1)