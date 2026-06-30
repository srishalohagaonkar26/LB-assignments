#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 7th bit: 1 << 6 -> 0x00000040
    // 8th bit: 1 << 7 -> 0x00000080
    // 9th bit: 1 << 8 -> 0x00000100
    // Combined mask = 0x000001C0
    UINT iMask = 0x000001C0;
    
    if ((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 448; // Binary: 111000000 (Bits 7, 8, 9 are ON)
    BOOL bRet = FALSE;
    
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("7th, 8th, and 9th bits are all ON\n");
    }
    else
    {
        printf("One or more targeted bits are OFF\n");
    }
    
    return 0;
}