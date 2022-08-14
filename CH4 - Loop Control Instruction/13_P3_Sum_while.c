#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    while (i <= n)
    {

        sum += i;
        i++;
        // if (i > 5) --> agar yeh code dala to loop 5 pe hi rukjaega uske baad ke values loop me nhi jaengi
        // {
        //     break;
        // }
    }
    printf("The sum of first %d numbers is %d\n", n, sum);

    return 0;
}