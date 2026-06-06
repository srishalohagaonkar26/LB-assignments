#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Maximum(int Arr[], int iLength)//Arr gives the actual list of the elements and iLength is just like iSize
{
    int iCnt = 0;
    int iMax = 0;

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

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
        scanf("%d", &p[iCnt]);  //pishvi tyacha parynta pohchvaychi asen tr address lagto not name or anythinh of that person
    }

    iRet = Maximum(p, iSize);

    printf("Largest Number is %d", iRet);

    free(p);
    return 0;
}