#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("SMALL\n");
    }
    else if ((iNo > 50)&&(iNo < 100))
    {
        printf("MEDIUM\n");
    }
    else
    {
        printf("LARGE\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}