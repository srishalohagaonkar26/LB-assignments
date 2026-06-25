void StrRevX(char *str)
{
    char *start = str;           // Pointer at beginning
    char *end = str;
    
    // Find the end of string
    while(*end != '\0')
    {
        end++;
    }
    end--;  // Move back to last character (before \0)
    
    // Swap characters from both ends moving inward
    while(start < end)
    {
        // Swap
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;  // Move forward
        end--;    // Move backward
    }
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}