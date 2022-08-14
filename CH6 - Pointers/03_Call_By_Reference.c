#include <stdio.h>

void wrong_swap(int a, int b) // Kaam nhi krega due to call by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b) // Kaam krega due to call by reference
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d""%d", &x, &y);
    printf("The value of x and y before swap is %d and %d.\n", x, y);
    wrong_swap(x, y);
    printf("The value of x and y after wrong swap is %d and %d.\n", x, y);
    swap(&x, &y);
    printf("The value of x and y after swap is %d and %d.\n", x, y);
    return 0;
}