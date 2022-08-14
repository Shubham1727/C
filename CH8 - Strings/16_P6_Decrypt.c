#include <stdio.h>

void Decrypt(char string[])
{
    char *ptr;
    ptr = string;
    while (*ptr != '\0')
    {
        *ptr -= 1;
        ptr++;
    }
}

int main()
{
    char str[50];
    printf("Enter the decrypted message: ");
    gets(str);
    Decrypt(str);
    printf("The decrypted message is: %s", str);
    return 0;
}