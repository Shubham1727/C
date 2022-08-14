#include <stdio.h>

int main()
{
    int a, *b;
    b = &a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The address of a is %u\n", b);
    printf("The value of a is %d\n", *b);
    return 0;
}