#include <stdio.h>

void Display(char ch)
{
    printf("Output :\tDecimal\t\t%d\n", ch);
    printf("\t\tOctal\t\t0%o\n", ch);
    printf("\t\tHexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}