#include <stdio.h>

typedef struct Vector
{
    int x, y;
} Vector;

Vector sumvector(Vector v1, Vector v2)
{
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    Vector v1, v2, sum;

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

    sum = sumvector(v1, v2);
    printf("The vector sum of (%d,%d) and (%d,%d) is (%d,%d)", v1.x, v1.y, v2.x, v2.y, sum.x, sum.y);
    return 0;
}