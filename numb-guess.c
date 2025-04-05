#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int number, guess, attempts = 0;
  int max_num = 100;

  srand(time(NULL));
  number = rand() % max_num + 1;

  printf("Guess number between 1 to 100\n");

  do {
    if (attempts > 9) {
      printf("You failed\n");
      break;
    }

    scanf("%d", &guess);
    //Lower than actual number
    if (guess < number) {
    printf("\n Lower try again. ");
    attempts++;
    }
    else if (guess > number) {
    printf("\n Higher try again.\n");
    attempts++;
    }
  else {
      printf(" attempts in %d \n", attempts);
    }
  } while (guess != number);
  return 0;
}
