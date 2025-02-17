#include <stdio.h>

int main()
{
    const float pi=3.14;
    float R;
    printf("Radius R=");
    scanf("%f",&R);
    float result=pi*R*R;
    printf("Area=%f",result);
    return 0;
}
