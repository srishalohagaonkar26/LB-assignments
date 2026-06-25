#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    // Filter: Loop while source is not null terminator
    while(*src != '\0')
    {
        *dest = *src;   // Copy character
        src++;          // Move source pointer forward
        dest++;         // Move destination pointer forward
    }
    *dest = '\0';       // Add null terminator at end
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  // Empty string
    
    StrCpyX(arr, brr);
    
    printf("%s", brr);  // Output: Marvellous Multi OS
    
    return 0;
}