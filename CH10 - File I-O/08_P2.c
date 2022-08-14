#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", n, i, n * i);
    }
    fclose(ptr);
    return 0;
}