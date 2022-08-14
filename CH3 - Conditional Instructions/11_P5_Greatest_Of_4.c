#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter the numbers\n");
    scanf("%d"
          "%d"
          "%d"
          "%d",
          &num1, &num2, &num3, &num4);

    // printf("Enter the number\n");
    // scanf("%d", &num2);

    // printf("Enter the number\n");
    // scanf("%d", &num3);

    // printf("Enter the number\n");
    // scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is greatest", num1);
            }
            else
            {
                printf("%d is greatest", num4);
            }
        }
        else if (num3 > num4)
        {
            printf("%d is greatest", num3);
        }
        else
        {
            printf("%d is greatest", num4);
        }
    }

    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            printf("%d is greatest", num2);
        }
        else
        {
            printf("%d is greatest", num4);
        }
    }
    else if (num3 > num4)
    {
        printf("%d is greatest", num3);
    }
    else
    {
        printf("%d is greatest", num4);
    }

    return 0;
}