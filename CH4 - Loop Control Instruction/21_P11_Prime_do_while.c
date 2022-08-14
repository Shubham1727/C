#include <stdio.h>

int main()
{
    int i = 2, n, prime = 1;
    printf("Enter the number to be checked for it is prime or not\n");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Invalid Input\n");
    }

    else
    {
        do
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        } while (i < n);

        if (prime == 1)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }

    return 0;
}