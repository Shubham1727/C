#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in celsius\n");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("The temperature in fahrenheit is %f", f);
    return 0;
}