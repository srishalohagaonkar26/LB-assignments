#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

    if (str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if ((str >= 'a') && (str <= 'z'))
        {
            iSmall++;
        }
        else if ((str >= 'A') && (str <= 'Z'))
        {
            iCapital++;
        }
        iCnt = iSmall - iCapital;
        
    }
    
    iCnt = iSmall - iCapital;

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}