#include <stdio.h>

int main()
{
    int arr[3][10];
    int n1, n2, n3;
    int mul[10];
    printf("Enter three numbers whose multiplication table you want\n");
    scanf("%d"
          "%d"
          "%d",
          &n1, &n2, &n3);

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mul[j] = n1 * (j + 1);
            printf("%d ", mul[j]);
        }
        printf("\n");
    }

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mul[j] = n2 * (j + 1);
            printf("%d ", mul[j]);
        }
        printf("\n");
    }

    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mul[j] = n3 * (j + 1);
            printf("%d ", mul[j]);
        }
        printf("\n");
    }

    return 0;
}