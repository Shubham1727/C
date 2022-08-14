#include <stdio.h>

void Presence(char string[], char c)
{
    char *ptr;
    ptr = string;
    int checker;
    while (*ptr != '\0')
    {
        if ((*ptr) == c)
        {
            checker = 1;
            break;
        }
        else
        {
            checker = 0;
        }

        ptr++;
    }
    if (checker == 1)
    {
        printf("%c is present in the string\n", c);
    }
    else
    {
        printf("%c is not present in the string\n", c);
    }
}
int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    fflush(stdin);
    char n;
    printf("Enter a character whose presence you want to check: ");
    scanf("%c", &n);
    Presence(str, n);
    return 0;
}