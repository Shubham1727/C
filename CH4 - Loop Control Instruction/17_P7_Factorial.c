#include <stdio.h>

int main()
{
    int i = 1, n, factorial = 1;
    printf("Enter the number whose factorial is to be calculated\n");
    scanf("%d", &n);

    for (i; i <= n; i++)
    {
        factorial *= i; // --> This means factorial = factorial * i
    }
    printf("The value of %d! = %d\n", n, factorial);
    return 0;
}