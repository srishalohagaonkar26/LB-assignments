#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 7th bit:  1 << 6   -> 0x00000040
    // 15th bit: 1 << 14  -> 0x00004000
    // 21st bit: 1 << 20  -> 0x00100000
    // 28th bit: 1 << 27  -> 0x08000000
    // Combined mask = 0x08104040
    UINT iMask = 0x08104040;
    
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
    UINT iValue = 135282752; // Bits 7, 15, 21, and 28 are ON
    BOOL bRet = FALSE;
    
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("7th, 15th, 21st, and 28th bits are all ON\n");
    }
    else
    {
        printf("One or more targeted bits are OFF\n");
    }
    
    return 0;
}