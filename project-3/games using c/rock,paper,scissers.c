#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Set the random seed
  srand(time(NULL));

  char choices[3] = {'R', 'P', 'S'};

  int userChoice;
  int computerChoice = rand() % 3;

  printf("Rock, Paper, Scissors!\n");
  printf("Enter your choice (R - Rock, P - Paper, S - Scissors): ");
  scanf(" %c", &userChoice); // Read character with a space to avoid newline issues

  userChoice = toupper(userChoice); // Convert to uppercase for easier comparison

  if (userChoice == choices[0] && computerChoice == 2 ||
      userChoice == choices[1] && computerChoice == 0 ||
      userChoice == choices[2] && computerChoice == 1) {
    printf("You win! ");
  } else if (userChoice == computerChoice) {
    printf("It's a tie! ");
  } else {
    printf("You lose! ");
  }

  printf("You chose %c, computer chose %c\n", userChoice, choices[computerChoice]);

  return 0;
}

