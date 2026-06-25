#include<stdio.h>

int CountWhite(char *str)
{
    while (*str != '\0')
    {
        if (*str = ' ')
        {
            printf("White Spaces are : %s\n",*str);
            str++;
        }
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    iRet  = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}