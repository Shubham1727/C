#include <stdio.h>

int fibonacci(int n)
{
    int next, n1, n2;
    n1 = 0;
    n2 = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }

    return next;
}

int main()
{
    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci Series\n");
    fibonacci(n);
    return 0;
}