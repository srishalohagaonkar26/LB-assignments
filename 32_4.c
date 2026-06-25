#include<stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 40 && *str <= 57)
        {
            printf("%c\n",*str);
            str++;
        }
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}