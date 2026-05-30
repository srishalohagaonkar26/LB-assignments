#include<stdio.h>

void DisplayTable(int iNo)
{
    int i= 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n",iNo * i);  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}