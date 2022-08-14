#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], c;
    int i = 0;

    printf("Enter the value of first string\n");
    scanf("%s", str1);

    printf("Enter characters for second string\n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';

    printf("The value of string 1 is %s\n", str1);
    printf("The value of string 2 is %s\n", str2);
    printf("The value of strcmp is %d\n", strcmp(str1, str2));
    return 0;
}