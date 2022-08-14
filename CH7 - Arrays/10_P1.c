#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = arr;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of element %d of the array is %d\n", i + 1, *ptr);
    //     ptr++;
    // }

    printf("The value of element 1 of the array is %d\n", *ptr);

    ptr += 2;

    printf("The value of element 3 of the array is %d\n", *ptr);

    return 0;
}