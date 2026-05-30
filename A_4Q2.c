#include<stdio.h>

CheckDisplay(int iNo)
{
   if (iNo == 9)
   {
    return"NINE";
   }
   else if(iNo == -3)
   {
    return"THREE";
   }
   else if (iNo == 12)
   {
    return"INVALID NUMBER";
   }
   
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    CheckDisplay(iValue);

    return 0;
}