#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  int num, guess, i = 0;
  srand(time(0));
  num = rand() % 100 + 1;

  while (guess != num)
  {
    printf("u r guess = ");
    scanf("%d", &guess);
    if (guess > num)
      printf("enter lower value\n");
    if (guess < num)
      printf("enter higher value\n");

    i++;
  }

  printf("crt guess \n no. of guess = %d", i);

  return 0;
}