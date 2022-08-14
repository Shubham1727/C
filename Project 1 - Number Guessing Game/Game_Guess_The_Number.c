#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // This will create a number between 1 to 100
    // printf("The number is %d\n", number);
    // Keep the loop running until the number is guessed
    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You have guessed the number in %d attempt(s)\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}