#include <stdio.h>
int factorial(int x);

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = factorial(a);
    printf("The value of %d! is %d\n", a, b);
    return 0;
}

int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}