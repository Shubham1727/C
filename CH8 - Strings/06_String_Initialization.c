#include <stdio.h>

int main()
{
    // char str[] = "Naruto Uzumaki"; //--> iske baad reinitialization nahi ho skti
    char *str = "Naruto Uzumaki"; // --> iske baad reinitialization ho skti hai
    str = "Sasuke Uchiha";
    printf("%s", str);
    return 0;
}