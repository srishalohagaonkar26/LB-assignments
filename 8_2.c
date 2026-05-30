#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0) fWidth = -fWidth;
    if(fHeight < 0) fHeight = -fHeight;

    dArea = (double)(fWidth * fHeight);
    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%0.3f\n", dRet);

    return 0;
}
//O(1)