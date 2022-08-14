#include <stdio.h>

void slice(char string[], int m, int n)
{
    int i = 0;
    while ((i + m) < n)
    {
        string[i] = string[i + m];
        i++;
    }
    string[i] = '\0';
}

int main()
{
    char str[50];
    int m, n;
    printf("Enter a string\n");
    scanf("%s", str);
    printf("Enter from which position you want to slice the string\n");
    scanf("%d"
          "%d",
          &m, &n);
    slice(str, m, n);
    printf("The sliced string is %s", str);
    return 0;
}