#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    // Using 5.0 / 9.0 to ensure floating-point division rather than integer truncation
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%0.6f\n", dRet);

    return 0;
}
//O(1)