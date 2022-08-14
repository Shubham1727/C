#include <stdio.h>

void Positive_Integers(int *ptr, int n)
{
    int positive = 0, negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (*ptr > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        ptr++;
    }
    printf("The number of positive integers are: %d\n", positive);

    printf("The number of positive integers are: %d\n", negative);
}
int main()
{
    int num;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter a number you want in your array: ");
        scanf("%d", &arr[i]);
    }

    printf("Your array is {");

    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("}\n");

    Positive_Integers(arr, num);
    return 0;
}