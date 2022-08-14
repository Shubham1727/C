#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your age\n");
    scanf("%d", &a);
    printf("Do yo have emergency pass type 1 if yes and 0 if no\n");
    scanf("%d", &b);
    if ((a >= 18 && a <= 75) || (b == 1))

    {
        printf("You can drive\n");
    }

    else

    {
        printf("You cannot drive\n");
    }

    return 0;
}