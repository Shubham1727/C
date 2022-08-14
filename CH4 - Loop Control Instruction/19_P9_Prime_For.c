#include <stdio.h>

int main()
{
    // *** This is not the best way to create this program
    // This is a problem of DS algorithms
    int i, n, prime = 1;
    printf("Enter the number to be checked for it is prime or not\n");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d is a prime number\n", n);
        }
        else if (prime == 0)
        {
            printf("%d is not a prime number\n", n);
        }
        // if (prime == 0)
        // {
        //     printf("%d is not a prime number\n", n);
        // }
        // else
        // {
        //     printf("%d is a prime number\n", n);
        // }
        // Can also do this --^
    }

    return 0;
}