#include <stdio.h>

int sum(int a, int b)
{
    // a=5;
    // b=7;
    int add = a + b;
    return add;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers\n");
    scanf("%d"
          "%d",
          &n1, &n2);
    printf("The value of a+b is %d", sum(n1, n2));
    return 0;
}