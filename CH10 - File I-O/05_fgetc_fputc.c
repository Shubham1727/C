#include <stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("getcdemo.txt", "r");
    // // char c = fgetc(ptr);
    // printf("The value of my charatcer is %c\n", fgetc(ptr));
    // printf("The value of my charatcer is %c\n", fgetc(ptr));
    // printf("The value of my charatcer is %c\n", fgetc(ptr));
    // printf("The value of my charatcer is %c\n", fgetc(ptr));
    // printf("The value of my charatcer is %c\n", fgetc(ptr));
    // printf("The value of my charatcer is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fclose(ptr);

    return 0;
}