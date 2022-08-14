#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the number of integers you want to allocate memory for: ");
    scanf("%d", &n);
    // malloc ek void type pointer return krega to fer usko typecast krna pdega jis type ki value return krvani hai
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is: %d\n", i + 1, ptr[i]);
    }

    //Reallocating ptr using realloc
    int m;
    printf("Enter how many numbers to store now: ");
    scanf("%d", &m);
    ptr = realloc(ptr, m * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("The value of element %d is: %d\n", i + 1, ptr[i]);
    }

    return 0;
}