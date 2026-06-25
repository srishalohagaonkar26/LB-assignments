void struprx(char *str)
{
    while (*str != '\0')  // While string hasn't ended
{
    if (*str >= 65 && *str <= 90)  // If character is uppercase
    {
        printf("%c", *str + 32);  // Convert to lowercase
    }
    else
    {
        printf("%c", *str);  // Print as is (lowercase or others)
    }
    str++;
}
}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}