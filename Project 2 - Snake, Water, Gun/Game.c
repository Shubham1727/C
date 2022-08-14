#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Snake_Water_Gun(char you, char comp)
{
    // return 1 if you win, -1 of comp wins, 0 if there is a draw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char you, comp;
    int number;

    srand(time(0));
    number = rand() % 100 + 1; // This will create a number between 1 to 100

    if (number <= 33)
    {
        comp = 's';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter s for snake, w for water or g for gun: ");
    scanf("%c", &you);

    int result = Snake_Water_Gun(you, comp);

    printf("You chose %c and computer chose %c\n", you, comp);

    if (result == 0)
    {
        printf("Game draw !\n");
    }
    else if (result == 1)
    {
        printf("You win !\n");
    }
    else if (result == -1)
    {
        printf("Computer wins !\n");
    }
    return 0;
}