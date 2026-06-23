#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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
    bool bRet = false;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);
    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}