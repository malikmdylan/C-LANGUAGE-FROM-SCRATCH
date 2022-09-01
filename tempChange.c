//change temperature from celsius to fahrenheit
//BY MALIK M DYLAN
#include <stdio.h>
#include <math.h>
void main()
{
    float c,f;
    printf("enter the temperature in celsius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the temperature in fahrenheit is %f",f);
}
