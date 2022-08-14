#include <stdio.h>

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}

int main()
{
    float m, f;
    printf("Enter the mass in Kg\n");
    scanf("%f", &m);
    f = force(m);
    printf("The value of force is %f N\n", f);

    return 0;
}