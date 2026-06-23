#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Output : ",ch);

        for (char i = ch ; i <= 'Z'; i++)
        {
            printf("%c\n",i);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Output : ",ch);

        for (char i = ch ; i >= 'a' ; i--)
        {
            printf("%c\n",i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}