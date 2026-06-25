#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    // Filter: Loop while source is not null terminator
    while(*src != '\0')
    {
        // Logic: Check if character is lowercase (a-z)
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;   // Copy only if small
            dest++;
        }
        src++;
    }
    *dest = '\0';           // Add null terminator
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];  // Empty string
    
    StrCpySmall(arr, brr);
    
    printf("%s", brr);  // Output: arvellousmulti
    
    return 0;
}