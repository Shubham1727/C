#include <stdio.h>

int main()
{
    int a, b, n = 0;
    printf("Enter the value of a and b\n");
    scanf("%d"
          "%d",
          &a, &b);

    while (n <= b)
    {
        printf("The value of %d X %d = %d\n", a, n, a * n);
        n++;
    }

    return 0;
}