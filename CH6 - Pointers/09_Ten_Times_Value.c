#include <stdio.h>

void TenTimes(int a)
{
    a *= 10;
}
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    TenTimes(i);
    printf("The value of i after function call is %d", i);
    return 0;
}