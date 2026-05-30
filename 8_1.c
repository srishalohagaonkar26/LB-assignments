#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14f;

    // Radius cannot be negative in physical geometry
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    // Printing up to 4 decimal places to match the sample assignment output
    printf("%0.4f\n", dRet);

    return 0;
}
//time complexity = O(1)