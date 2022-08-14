#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value\n");
    scanf("%d", &i);
// do-while--> while loop jo ek baar atleast run hota hai
// pehle code run fer condition check
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 15);
    return 0;
}