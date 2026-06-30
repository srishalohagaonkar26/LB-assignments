#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 5th bit: 1 << 4  -> 0x00000010
    // 18th bit: 1 << 17 -> 0x00020000
    // Combined mask = 0x00020010
    UINT iMask = 0x00020010;
    
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
    UINT iValue = 131088; // 131088 has both 5th and 18th bits ON
    BOOL bRet = FALSE;
    
    bRet = ChkBit(iValue);
    
    if (bRet == TRUE)
    {
        printf("Both 5th and 18th bits are ON\n");
    }
    else
    {
        printf("Either 5th or 18th bit (or both) is OFF\n");
    }
    
    return 0;
}