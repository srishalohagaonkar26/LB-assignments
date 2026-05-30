#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d\n", iRet);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is the range length $(iEnd - iStart + 1)$.