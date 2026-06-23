#include <stdio.h>

void DisplayASCII()
{
    // A simplified header
    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("-------------------------------------\n");

    // Loop only through standard, printable characters (32 to 126)
    for (int i = 32; i <= 126; i++)
    {
        // %c prints the character symbol
        // %d prints its decimal number
        // %x prints its hexadecimal value
        // %o prints its octal value
        printf("%c\t%d\t%x\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}