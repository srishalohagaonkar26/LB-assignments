#include <stdio.h>

template<class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];
    int i = 0;
    
    for (i = 1; i < iSize; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = Min(arr,5);
    printf("%d\n",iSum);

    float fSum = Min(brr,4);
    printf("%f\n",fSum);

    return 0;
}