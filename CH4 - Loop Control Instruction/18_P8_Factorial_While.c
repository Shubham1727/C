#include <stdio.h>

int main()
{
    int i = 1, n, factorial = 1;
    printf("Enter the number whose factorial is to be calculated\n");
    scanf("%d", &n);

    while (i <= n)
    {
        //i++;--> isse required value se jada ka factorial print hojega jaise for eg => 4!=120
        factorial *= i;
        i++;
    }
    printf("The value of %d! = %d\n", n, factorial);
    return 0;
}