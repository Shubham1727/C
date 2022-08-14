#include <stdio.h>

void quicksort(int number[25], int first, int last)
{

    int i, j, pivot, temp;

    if (first < last)
    {

        pivot = first;

        i = first;

        j = last;

        while (i < j)
        {

            while (number[i] <= number[pivot] && i < last)

                i++;

            while (number[j] > number[pivot])

                j--;

            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

        temp = number[pivot];

        number[pivot] = number[j];

        number[j] = temp;

        quicksort(number, first, j - 1);

        quicksort(number, j + 1, last);
    }
}

int main()
{

    int i, count, number[25];

    printf("Enter some elements (Max. - 25): ");

    scanf("%d", &count);

    printf("Enter %d elements: ", count);

    for (i = 0; i < count; i++)

        scanf("%d", &number[i]);

    quicksort(number, 0, count - 1);

    printf("The Sorted Order is: ");

    for (i = 0; i < count; i++)

        printf(" %d", number[i]);

    return 0;
}

// Merge sort in C

#include <stdio.h>

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

// Print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program
int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    printArray(arr, size);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max;
void merge(char arr[], int l, int m, int u)
{
    int l1 = m - l;
    int l2 = u - m + 1;

    char a1[l1];
    char a2[l2];

    for (int i = 0; i < l1; i++)
    {
        a1[i] = arr[l + i];
    }
    for (int i = 0; i < l2; i++)
    {
        a2[i] = arr[i + m + 1];
    }
    int p = 0, q = 0, k = l;
    while (p < l1 && q < l2)
    {
        if (a1[p] > a2[q])
        {
            arr[k] = a2[q];
            q++;
            k++;
        }
        else
        {
            arr[k] = a1[p];
            p++;
            k++;
        }
    }
    while (p < l1)
    {
        arr[k] = a1[p];
        p++;
        k++;
    }
    while (q < l2)
    {
        arr[k] = a2[q];
        q++;
        k++;
    }
}
void Merge_Sort(char arr[], int l, int u)
{
    if (l < u)
    {
        int m = (l + u) / 2;
        Merge_Sort(arr, l, m);
        Merge_Sort(arr, m + 1, u);
        merge(arr, l, m, u);
    }
}
void display(char arr[])
{
    printf("The Array is : \n");
    for (int i = 0; i < max; i++)
    {
        printf("  %c  ", arr[i]);
    }
    printf("\n");
}
void main()
{
    char arr[max];
    printf("Enter the Size of the Array :\n");
    scanf("%d", &max);
    for (int i = 0; i < max; i++)
    {
        printf("Enter the Item %d ", i);
        scanf("%s", &arr[i]);
    }
    printf("\n\n");
    display(arr);
    printf("The Sorted Array is \n");
    Merge_Sort(arr, 0, max - 1);
    display(arr);
}