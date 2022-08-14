#include <stdio.h>

int main()
{
    FILE *ptr;
    int number = 69;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d\n", number);
    fclose(ptr);
    return 0;
}