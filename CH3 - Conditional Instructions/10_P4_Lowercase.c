#include <stdio.h>

int main()
{
    char ch;
    // 97-122 = a-z
    printf("Enter your character\n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("The character is lowercase");
    }
    else
    {
        printf("The character is uppercase");
    }

    return 0;
}