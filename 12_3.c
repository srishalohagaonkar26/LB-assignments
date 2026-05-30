#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFound = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFound = true;
            break; // Terminate loop early once target item is located
        }
    }

    return bFound;
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    if(iSize <= 0)
    {
        printf("Invalid size\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}
//Time Complexity: $O(N)$ where $N$ is iLength (Worst-case occurs when 11 is at the final slot or entirely missing).