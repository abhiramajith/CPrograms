#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int randNum;
  int seed;
  int userWins = 0;
  int compWins = 0;

  printf("Enter a seed for the random number generator.\n");

  scanf("%d", &seed);

  srand(seed);

printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");
  for (i=0; i<10; i++) {

    randNum = rand()%3+1;


  int userInput;
  int computerInput = randNum;



label : scanf("%d", &userInput);

if (userInput < 0 || userInput>3){
  printf("Invalid Input!\n");
  printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");
  goto label;

}
if (userInput == 1){
  printf("User choice is ROCK.\n");
}
if (userInput == 2){
  printf("User choice is PAPER.\n");
}
if (userInput == 3){
  printf("User choice is SCISSORS.\n");
}


if (computerInput == 1){
  printf("Computer choice is ROCK.\n");
}
if (computerInput == 2){
  printf("Computer choice is PAPER.\n");
}
if (computerInput == 3){
  printf("Computer choice is SCISSORS.\n");
}



if (userInput == 1 && computerInput == 1){
  printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
}
if (userInput == 2 && computerInput == 2){
  printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
}
if (userInput == 3 && computerInput == 3){
  printf("It's a draw. Computer chose SCISSORS and User also chose SCISSORS.\n");
}


if (userInput == 1 && computerInput == 3){
  printf("User wins because ROCK beats SCISSORS.\n");
  userWins++;
}
if (userInput == 2 && computerInput == 1){
  printf("User wins because PAPER beats ROCK.\n");
  userWins++;
}
if (userInput == 3 && computerInput == 2){
  printf("User wins because SCISSORS beats PAPER.\n");
  userWins++;
}



if (userInput == 3 && computerInput == 1){
  printf("COMPUTER wins because ROCK beats SCISSORS.\n");
  compWins++;
}
if (userInput == 1 && computerInput == 2){
  printf("COMPUTER wins because PAPER beats ROCK.\n");
  compWins++;
}
if (userInput == 2 && computerInput == 3){
  printf("COMPUTER wins because SCISSORS beats PAPER.\n");
  compWins++;
}

}
printf("In 10 games, computer won %d times and user won %d times\n", compWins, userWins );
  return 0;
}
