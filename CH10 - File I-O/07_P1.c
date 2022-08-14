#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("P1.txt", "r");
    fscanf(ptr, "%d"
                "%d"
                "%d",
           &a, &b, &c);
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
    return 0;
}