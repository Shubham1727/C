#include <stdio.h>
void display(); // Function Prototype

int main()
{
    int a;
    printf("Initialising display funtion\n");
    display(); // Function call
    printf("Display funtion finished its work\n");
    return 0;
}
void display() // Function definition
{
    printf("This is display\n");
}