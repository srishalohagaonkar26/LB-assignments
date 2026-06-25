#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    // Traverse first string till end
    while(*dest != '\0')
    {
        dest++;
    }
    
    // Logic: Copy contents of destination in source
    while(*src != '\0')
    {
        *dest = *src;   // Copy source to end of destination
        src++;
        dest++;
    }
    *dest = '\0';       // Add null terminator
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    
    StrCatX(brr, arr);
    
    printf("%s", arr);  // Output: Marvellous Infosystems Logic Building
    
    return 0;
}