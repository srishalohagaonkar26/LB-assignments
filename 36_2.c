#include <stdio.h>

typedef int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0x40;
    UINT iMask2 = 0x200;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = iMask1 | iMask2;
    
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