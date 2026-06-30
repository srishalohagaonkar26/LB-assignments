#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    // 7th bit is (1 << 6) -> 0x40
    // 10th bit is (1 << 9) -> 0x200
    // Combined mask: 0x200 | 0x40 = 0x240
    UINT iMask = 0X00000240;
    
    // XOR operator toggles both targeted bits
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 137;
    UINT iRet = 0;
    
    iRet = ToggleBit(iValue);
    
    printf("Input: %u\n", iValue);
    printf("Output: %u\n", iRet); // Expected: 713
    
    return 0;
}