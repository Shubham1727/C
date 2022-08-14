#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);

    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    // the block keeps on printing the code as long as the condition is true

    return 0;
}