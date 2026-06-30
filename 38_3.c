#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 9th bit mask:  1 << 8  -> 0x00000100
    // 12th bit mask: 1 << 11 -> 0x00000800
    // Combined mask for checking either: 0x00000900
    UINT iMask = 0x00000900;
    
    // Check if at least one targeted bit is set
    if ((iNo & iMask) != 0)
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
    UINT iValue = 257; // Binary: 100000001 (9th bit is ON)
    BOOL bRet = FALSE;
    
    printf("Input  : %u\n", iValue);
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("Output : TRUE\n");
    }
    else
    {
        printf("Output : FALSE\n");
    }
    
    return 0;
}