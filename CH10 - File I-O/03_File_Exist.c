#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2;
    ptr = fopen("Aksh.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exists\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);// file close krne ke lie hai
        printf("The value of num1 is %d\n", num1);
        printf("The value of num2 is %d\n", num2);
    }

    return 0;
}