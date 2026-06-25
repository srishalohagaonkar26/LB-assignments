#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter: Loop while source is not null terminator
    while(*src != '\0')
    {
        // Logic: Check if character is uppercase (A-Z)
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;   // Copy only if capital
            dest++;
        }
        src++;
    }
    *dest = '\0';           // Add null terminator
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  // Empty string
    
    StrCpyCap(arr, brr);
    
    printf("%s", brr);  // Output: MMOS
    
    return 0;
}