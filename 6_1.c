#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Filter to handle negative inputs
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // First loop to print '*' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    // Second loop to print '#' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//time complexity = 2N