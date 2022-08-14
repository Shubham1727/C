#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Akshit";
    char str2[] = "Simran";
    int val = strcmp(str1, str2);
    printf("Val is %d", val);
    return 0;
}