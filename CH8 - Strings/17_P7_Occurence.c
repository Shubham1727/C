#include <stdio.h>

void Occurence(char string[], char c)
{
    char *ptr;
    ptr = string;
    int counter = 0;
    while (*ptr != '\0')
    {
        if ((*ptr) == c)
        {
            counter++;
        }
        ptr++;
    }
    printf("The occurence of %c is %d times", c, counter);
}
int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    fflush(stdin);
    char n;
    printf("Enter a character whose occurence you want to check: ");
    scanf("%c", &n);
    Occurence(str, n);
    return 0;
}