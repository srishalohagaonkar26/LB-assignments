#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if (str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;      //str++ nahi kela tar string la pudhe jaycha kalat ach nahi
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}