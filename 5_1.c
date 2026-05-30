#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    int bHasFactor = 0; // Track if the number has any proper factors

    // If number is negative, convert it to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop goes up to (iNo / 2) because no proper factor can be greater than half of the number
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
            bHasFactor = 1;
        }
    }

    if(bHasFactor == 0)
    {
        return 0; // Return 0 if there are no proper factors (e.g., 0 or 1)
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
//n/2 ---> time complexity