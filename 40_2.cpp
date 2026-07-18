#include <stdio.h>

template<class T>
T LargestNumber(T no1, T no2, T no3)
{
    if (no1>no2 && no1>no3)
    {
        return no1;
    }
    else if (no2>no3 && no2>no1)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iRet = LargestNumber(10,20,30);
    printf("%d\n",iRet);

    float fRet = LargestNumber(10.0f,20.0f,30.0f);
    printf("%f\n",fRet);

    return 0;
}