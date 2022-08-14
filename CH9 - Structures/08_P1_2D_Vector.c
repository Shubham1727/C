#include <stdio.h>

struct Vector
{
    int x, y;
};

int main()
{
    struct Vector v1, v2;

    printf("Enter the x dimension for vector v1: ");
    scanf("%d", &v1.x);
    printf("Enter the y dimension for vector v1: ");
    scanf("%d", &v1.y);

    printf("Enter the x dimension for vector v2: ");
    scanf("%d", &v2.x);
    printf("Enter the y dimension for vector v2: ");
    scanf("%d", &v2.y);

    printf("The vector v1 is (%d,%d)\n", v1.x, v1.y);
    printf("The vector v2 is (%d,%d)\n", v2.x, v2.y);
    return 0;
}