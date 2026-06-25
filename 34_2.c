#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    // Filter: Loop while source is not null AND count > 0
    while(*src != '\0' && (iCnt > 0))
    {
        *dest = *src;   // Copy character
        src++;
        dest++;
        iCnt--;         // Decrease count
    }
    *dest = '\0';       // Add null terminator
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  // Empty string
    
    StrNCpyX(arr, brr, 10);
    
    printf("%s", brr);  // Output: Marvellous (10 characters)
    
    return 0;
}