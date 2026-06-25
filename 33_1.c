#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

bool ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}