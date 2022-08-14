#include<stdio.h>

int main()
{
    int length, breadth;

    printf("length\n");
    scanf("%d", &length);

    printf("breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length*breadth);
    return 0;
}