#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void merge(int arr[],int l, int m , int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=m-r;
    int l1[n1];
    int r1[n2];
 
    for (int i = 0; i <n1; i++)
    {
        l1[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        r1[j]= arr[m+1+i];
    }
    i=0;
    j=0;
    k=l;
    while (i<n1 && j<n2)
    {
       if (l1[i]<l1[j])
       {
           /* code */
       }
       
    }
    
    
    

}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - 1) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int n;
    int arr[n];
    printf("enter value of n :");
    scanf("%d", &n);
    printf("enter array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", arr[i]);
    }
    bubblesort(arr, n);
    printf("sorted array is = ");
    printarray(arr, n);
    return 0;
}