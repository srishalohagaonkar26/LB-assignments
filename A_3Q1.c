#include<stdio.h>

void PrintEven(int iNo)
{
    int i;
    if(iNo <= 0)
    {
        return;
    }
    for(i=2; i <= iNo; i += 2)
    {
        printf("%d",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}