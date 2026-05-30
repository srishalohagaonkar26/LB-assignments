#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    int bHasFactors = 0; // Flag to track if any proper factor > 1 is found

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop goes up to (iNo / 2) because proper factors cannot exceed half the number
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
            bHasFactors = 1;
        }
    }

    // If no factors were found or number is less than or equal to 1, return 1 or 0 safely
    if(bHasFactors == 0 || iNo <= 1)
    {
        return 1;
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
//N/2