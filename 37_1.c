#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 15th bit mask: 1 << (15 - 1) -> 1 << 14 -> 0x00004000
    UINT iMask = 0x00004000;
    
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
    UINT iValue = 16384; // 16384 has only the 15th bit ON
    BOOL bRet = FALSE;
    
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("The 15th bit is ON\n");
    }
    else
    {
        printf("The 15th bit is OFF\n");
    }
    
    return 0;
}