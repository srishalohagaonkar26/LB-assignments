#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int lastindex = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            lastindex = i;
        }
        i++;
        str++;
    }
    return lastindex;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);

    return 0;
}