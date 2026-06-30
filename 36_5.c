#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    // First 4 bits mean binary 1111, which is 0x0F in hex
    UINT iMask = 0X0000000F;
    
    // OR operator sets bits to 1 (Turns them ON)
    return iNo | iMask;
}

int main()
{
    UINT iValue = 73;
    UINT iRet = 0;
    
    iRet = OnBit(iValue);
    
    printf("Input: %u\n", iValue);
    printf("Output: %u\n", iRet); // Expected: 79
    
    return 0;
}