#include <stdio.h>

void Encrypt(char string[])
{
    char *ptr;
    ptr = string;
    while (*ptr != '\0')
    {
        *ptr += 1;
        ptr++;
    }
}

int main()
{
    char str[50];
    printf("Enter a message to be encrypted: ");
    gets(str);
    Encrypt(str);
    printf("The encrypted message is: %s", str);
    return 0;
}