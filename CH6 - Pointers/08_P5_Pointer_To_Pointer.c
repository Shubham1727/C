#include <stdio.h>

int main()
{
    int i, *j, **k;
    j = &i;
    k = &j;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The value of i is %d", **k);
    return 0;
}