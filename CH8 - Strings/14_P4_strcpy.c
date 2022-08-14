#include <stdio.h>

void stringcopy(char string1[], char string2[])
{
    int i = 0;
    char *temp;
    temp = string1;
    while (*temp != '\0')
    {
        string2[i] = string1[i];
        i++;
        temp++;
    }
    string2[i] = '\0';
}
int main()
{
    char str1[] = "Naruto Uzumaki";
    char str2[50];
    stringcopy(str1, str2);
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    return 0;
}