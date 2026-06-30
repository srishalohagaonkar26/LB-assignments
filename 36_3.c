#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    // 7th bit means shifting 1 left by 6 positions
    // Binary mask: 0000 0000 0000 0000 0000 0000 0100 0000 (0x40)
    UINT iMask = 0X00000040;
    
    // XOR operator toggles the bit
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 137;
    UINT iRet = 0;
    
    iRet = ToggleBit(iValue);
    
    printf("Input: %u\n", iValue);
    printf("Output: %u\n", iRet); // Expected: 201
    
    return 0;
}