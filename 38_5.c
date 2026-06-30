#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    
    // Construct the mask dynamically for the given range
    for (int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }
    
    // XOR operation to toggle bits inside the mask region
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 897; 
    int iStart = 9;
    int iEnd = 13;
    UINT iRet = 0;
    
    printf("Input  : %u \t %d \t %d\n", iValue, iStart, iEnd);
    iRet = ToggleBitRange(iValue, iStart, iEnd);
    printf("Output : %u\n", iRet); // Expected: 879
    
    return 0;
}