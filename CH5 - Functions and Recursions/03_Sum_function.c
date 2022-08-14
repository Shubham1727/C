#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
//int sum(int a, int b); // function prototype declaration
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int a, b, c;
    printf("Enter the value of a and b\n");
    scanf("%d"
          "%d",
          &a, &b);
    c = sum(a, b); // function call
    printf("The value of c is %d\n", c);
    return 0;
}

// int sum(int a, int b)
// {
//     int result;
//     result = a + b;
//     return result;
// }