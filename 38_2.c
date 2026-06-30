#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCommon = iNo1 & iNo2; // Isolate common ON bits
    int iPos = 1;
    
    printf("Output : ");
    while (iCommon > 0)
    {
        // If the current position's bit is ON
        if ((iCommon & 1) == 1)
        {
            printf("%d\t", iPos);
        }
        iCommon = iCommon >> 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    UINT iValue1 = 10; // Binary: 1010
    UINT iValue2 = 15; // Binary: 1111
    
    printf("Input  : %u \t %u\n", iValue1, iValue2);
    CommonBits(iValue1, iValue2); // Expected output: 2   4
    
    return 0;
}