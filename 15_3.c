#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iIndex = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
            iIndex = iCnt;
    }

    return iIndex;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    printf("Enter the number");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d", iRet);
    }

    free(p);

    return 0;
}