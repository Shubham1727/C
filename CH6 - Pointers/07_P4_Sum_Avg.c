// Method-1
// #include <stdio.h>

// float sum(float *a, float *b)
// {
//     float sum = (*a) + (*b);
//     return sum;
// }
// float avg(float *c, float *d)
// {
//     float avg = ((*c) + (*d)) / 2;
//     return avg;
// }
// int main()
// {
//     float n1, n2;
//     printf("Enter two numbers\n");
//     scanf("%f"
//           "%f",
//           &n1, &n2);

//     printf("The sum of %f and %f is %f\n", n1, n2, sum(&n1, &n2));
//     printf("The avg of %f and %f is %f\n", n1, n2, avg(&n1, &n2));
//     return 0;
// }

// Method-2
#include <stdio.h>

void Sum_Avg(int a, int b, int *c, float *d)
{
    int sum = a + b;
    float avg = (float)sum / 2;
    *c = sum;
    *d = avg;
}
int main()
{
    int n1, n2, sum;
    float avg;
    printf("Enter two numbers\n");
    scanf("%d"
          "%d",
          &n1, &n2);
    Sum_Avg(n1, n2, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %f\n", avg);
    return 0;
}