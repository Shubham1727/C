#include <stdio.h>

int main()
{
    int a, b, n = 0, sum = 0;
    printf("Enter the value of a and b\n");
    scanf("%d"
          "%d",
          &a, &b);

    while (n <= b)
    {
        printf("The value of %d X %d = %d\n", a, n, a * n);
        sum += a * n;
        n++;
    }
    printf("The sum of the numbers in the above table is %d\n", sum);

    return 0;
}