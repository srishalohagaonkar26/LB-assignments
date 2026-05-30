#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    // Handle invalid range condition where starting point exceeds ending point
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Print all numbers from iStart to iEnd inclusive
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is the number of elements in the range $(iEnd - iStart + 1)$.