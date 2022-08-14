#include <stdio.h>

int stringlength(char string[])
{
    int counter = 0;
    char *ptr;
    ptr = string;
    while (*ptr != '\0')
    {
        counter++;
        ptr++;
    }
    return counter;
}
int main()
{
    char str[50];
    printf("Enter the string value\n");
    // scanf("%s", str);
    gets(str);
    int length = stringlength(str);
    printf("The length of this string is %d\n", length);
    return 0;
}