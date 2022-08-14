#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Naruto";
    char str2[50];
    strcpy(str2, str1);
    printf("The value of str2 is %s\n", str2);
    printf("The value of str1 is %s\n", str1);
    return 0;
}