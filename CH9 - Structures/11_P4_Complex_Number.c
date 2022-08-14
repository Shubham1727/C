#include <stdio.h>

typedef struct Complex_Number
{
    int x, y;
} Z;

int main()
{
    Z c1, c2;

    printf("Enter the real part of the complex number c1: ");
    scanf("%d", &c1.x);
    printf("Enter the imaginary part of the complex number c1: ");
    scanf("%d", &c1.y);

    printf("Enter the real part of the complex number c2: ");
    scanf("%d", &c2.x);
    printf("Enter the imaginary part of the complex number c2: ");
    scanf("%d", &c2.y);

    printf("The complex number c1 is %d+%di\n", c1.x, c1.y);
    printf("The complex number c2 is %d+%di\n", c2.x, c2.y);

    return 0;
}