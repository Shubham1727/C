#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;

    } while (i <= n);

    printf("The sum of first %d numbers is %d\n", n, sum);

    return 0;
}