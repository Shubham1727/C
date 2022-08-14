#include <stdio.h>

float average(float a, float b, float c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}

int main()
{
    float a, b, c, avg;
    printf("Enter three numbers whose average you want to calculate\n");
    scanf("%f"
          "%f"
          "%f",
          &a, &b, &c);
    avg = average(a, b, c);
    printf("The average of %f, %f & %f is %f\n", a, b, c, avg);

    return 0;
}