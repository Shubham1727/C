#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Your number is 1");
    }
    else if (num == 2)
    {
        printf("Your number is 2");
    }
    else if (num == 3)
    {
        printf("your number is 3");
    }
    else
    {
        printf("It's not 1,2 or 3");
    }

    return 0;
}