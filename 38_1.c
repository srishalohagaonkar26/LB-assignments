#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;
    
    // Loop through all bits until the number becomes 0
    while (iNo > 0)
    {
        // Check if the rightmost bit is 1
        if ((iNo & 1) == 1)
        {
            iCount++;
        }
        // Shift right by 1 to process the next bit position
        iNo = iNo >> 1;
    }
    
    return iCount;
}

int main()
{
    UINT iValue = 11; // Binary: 1011 (has three 1s)
    int iRet = 0;
    
    printf("Input  : %u\n", iValue);
    iRet = CountOne(iValue);
    printf("Output : %d\n", iRet); // Expected: 3
    
    return 0;
}