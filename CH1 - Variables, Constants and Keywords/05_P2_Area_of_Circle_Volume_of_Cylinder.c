#include<stdio.h>

int main(){

    int r,h;
    float pi=3.14;
    printf("Enter radius\n");
    scanf("%d", &r);
    printf("The area of circle is %f\n", pi*r*r);
    printf("Enter height\n");
    scanf("%d", &h);
    printf("The volume of cylinder is %f", pi*r*r*h);
    return 0;
}