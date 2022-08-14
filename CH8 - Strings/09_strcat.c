#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Naruto";
    char str2[] = "Uzumaki";
    strcat(str2, str1); // --> jo value pehle likhi hai usme baad vale ki value saathme chipak jaegi and final value usme store hogi with no space
    printf("The value of str2 is %s\n", str2);
    printf("The value of str1 is %s\n", str1);
    return 0;
}