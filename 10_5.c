#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Start iteration loop from the ending boundary down to the starting point
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is the range length $(iEnd - iStart + 1)$.