#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Explicitly handle 0 since 0 < 5
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 5)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return 0;
}
//Time Complexity: $O(\log_{10} N)$ where $N$ is iNo.