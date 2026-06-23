#include<stdio.h>
#include<stdbool.h>

void Reverse(char *str)
{
    char *start = NULL; //str pointer pudhun yenre

    //base address
    //100 
    start = str;    //both pointers now pointing at the same address

    while (*str != '\0')    //start end la ch ahe thamblela
    {
        str++;   
    }   
    
    str--;

    while (start <= str)    //str print karat jail mage pasun to paryanta jo paryanta tyala start nahi bhetat and start suruvatila ahe so last parynta print honar if h prynt print kryla bola asta tar to madhlya h la hi thambla asta thats why  
    {
       printf("%c\n",*str);
       str--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return 0;
}