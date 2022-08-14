#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stone_paper_scissor(char comp, char human)
{
    if (human == 'S' &&comp == 'P')
    {
        return -1;
    }
    else if (human == 'S' &&comp == 'C')
    {
        return 1;
    }
    else if (human == 'C' &&comp == 'P')
    {
        return 1;
    }
    else if (human == 'C' &&comp == 'S')
    {
        return -1;
    }
    else if (human == 'P' &&comp == 'S')
    {
        return 1;
    }
    else if (human == 'P' &&comp == 'C')
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
    char comp, human;
    int number;

    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'S';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'P';
    }
    else
    {
        comp = 'C';
    }

    printf("Write S for stone \n P for paper \n C for Scissor\n U R choice = ");
    scanf ("%s", &human);
    int result = stone_paper_scissor(comp, human);

    printf("You chose %c and computer chose %c\n", human, comp);

    if (result == 1)
    {
        printf("u win");       
    }
    if (result == -1)
    {
        printf("comp win");       
    }
    if (result == 0)
    {
        printf("draw");       
    }
    
}