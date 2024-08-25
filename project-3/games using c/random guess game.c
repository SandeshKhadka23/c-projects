#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Set the random seed
  srand(time(NULL));

  // Define game parameters
  int lowerBound = 1;
  int upperBound = 100;
  int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
  int guessCount = 0;
  int userGuess;

  printf("Guessing Game!\n");
  printf("I'm thinking of a number between %d and %d.\n", lowerBound, upperBound);

  // Main game loop
  while (1) {
    printf("Guess #%d: ", guessCount + 1);
    scanf("%d", &userGuess);
    guessCount++;

    if (userGuess == secretNumber) {
      printf("Congratulations! You guessed the number in %d tries.\n", guessCount);
      break;
    } else if (userGuess < secretNumber) {
      printf("Too low. Try again.\n");
    } else {
      printf("Too high. Try again.\n");
    }
  }

  return 0;
}

