// Yeh code matrix ke lie bhi use kr skta hai
#include <stdio.h>

void DisplayArray(int *ptr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *ptr);
            ptr++;
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d"
          "%d",
          &a, &b);

    int arr[a][b];
    int *P;
    P = &arr[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter a number to store in row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    DisplayArray(P, a, b);
    return 0;
}