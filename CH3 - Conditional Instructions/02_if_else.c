#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age\n");
    scanf("%d", &a);
    if (a >= 18 && a <= 80)
    {
        printf("You are eligible to get a driving license");
    }
    else
    {
        printf("You are not eligible to get a driving license");
    }

    return 0;
}