#include <stdio.h>

typedef struct Complex_Number
{
    int x, y;
} Z;

void display(Z C, int i)
{
    printf("The complex number c%d is %d+%di\n", i + 1, C.x, C.y);
    i++;
}

int main()
{
    Z C[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of the complex number c%d: ", i + 1);
        scanf("%d", &C[i].x);
        printf("Enter the imaginary part of the complex number c%d: ", i + 1);
        scanf("%d", &C[i].y);
    }

    for (int i = 0; i < 5; i++)
    {
        display(C[i], i);
    }

    return 0;
}