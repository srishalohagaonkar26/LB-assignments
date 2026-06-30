#include <stdio.h>

typedef int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = 0x40;

    iResult = iNo & ~iMask;
}

void main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    iRet = OffBit(iValue);
    
    printf("Updated no : %d\n", iRet);
}