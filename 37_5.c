#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 1st bit:  1 << 0  -> 0x00000001
    // 32nd bit: 1 << 31 -> 0x80000000
    // Combined mask = 0x80000001
    UINT iMask = 0x80000001;
    
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
    UINT iValue = 2147483649; // 0x80000001 in decimal (Both 1st and 32nd bits ON)
    BOOL bRet = FALSE;
    
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("Both the first (1st) and last (32nd) bits are ON\n");
    }
    else
    {
        printf("Either the first or last bit (or both) is OFF\n");
    }
    
    return 0;
}