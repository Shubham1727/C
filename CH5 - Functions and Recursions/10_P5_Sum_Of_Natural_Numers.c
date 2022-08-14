#include <stdio.h>

int function(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The sum of first %d numbers is %d", n, function(n));
    function(n);
    return 0;
}