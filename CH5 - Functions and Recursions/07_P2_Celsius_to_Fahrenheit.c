#include <stdio.h>

float Temperature(float c)
{
    float f;
    f = c * 9 / 5 + 32;
    return f;
}
int main()
{
    float c, f;
    printf("Enter the temperature in Celsius\n");
    scanf("%f", &c);
    f = Temperature(c);
    printf("The temperature in fahrenheit is %f\n", f);
    return 0;
}