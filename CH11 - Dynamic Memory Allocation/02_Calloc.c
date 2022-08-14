#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the number of integers you want to allocate memory for: ");
    scanf("%d", &n);
    // calloc is same as malloc bas calloc initalise to 0 krdeta saathme
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is: %d\n", i + 1, ptr[i]);
    }

    return 0;
}