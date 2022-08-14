#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *ptr);
//         ptr++;
//     }
// }

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, a[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(arr, 7);
    return 0;
}