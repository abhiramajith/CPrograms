#include <stdio.h>
#include <stdlib.h>
/*
Name: Abhiram Ajith - 20364441
Date: 27/10/2020
Title: A program that allows a user to play rock paper scissors against a computer
Input: 2 variables; Seed number for random number generator and a number between 1-3 which
                    corresponds to Rock, Paper and Scissors.
Expected output: The program should output the users choice, the random choice of the computer
                 and print who has won or if it was a draw, it should iterate 10 times. In the case of an invalid input
                 it should tell the user it is invalid and re-ask the question. It should also output
                 the number of wins for the computer and for the user at the end of 10 turns.

*/

int main(void)
{

  int i;
/* This variable is declared to hold a random number between 1 and 3 that will correspond to the computers choice of rock paper or scissors.*/
  int randNum;

/*This variable holds the seed number which determines the sequence of numbers it will generate*/
  int seed;

/* These variables act as counters for user and computer wins*/
  int userWins = 0;
  int compWins = 0;

/* ANY integer value can be given as a seed*/
  printf("Enter a seed for the random number generator.\n");
  scanf("%d", &seed);

/* Seeds the random number generator*/
  srand(seed);

/*This for loop makes the program iterate 10 times*/
  for (i=0; i<10; i++) {

printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");
/* Generate a random number and restrict it to the range 1 to 3*/
    randNum = rand()%3+1;


  int userInput;
  int computerInput = randNum;


/* I made this a label so it could be called in the loop incase the input is invalid.*/
label : scanf("%d", &userInput);

/*This is a test case for when the input is invalid*/
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


/* Draw conditions*/
if (userInput == 1 && computerInput == 1){
  printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
}
if (userInput == 2 && computerInput == 2){
  printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
}
if (userInput == 3 && computerInput == 3){
  printf("It's a draw. Computer chose SCISSORS and User also chose SCISSORS.\n");
}

/* User win conditions*/
if (userInput == 1 && computerInput == 3){
  printf("User wins because ROCK beats SCISSORS.\n");
  userWins++;// adds 1 to the userWins counter
}
if (userInput == 2 && computerInput == 1){
  printf("User wins because PAPER beats ROCK.\n");
  userWins++;
}
if (userInput == 3 && computerInput == 2){
  printf("User wins because SCISSORS beats PAPER.\n");
  userWins++;
}


/*computer win conditions*/
if (userInput == 3 && computerInput == 1){
  printf("COMPUTER wins because ROCK beats SCISSORS.\n");
  compWins++;// adds 1 to the compWins counter
}
if (userInput == 1 && computerInput == 2){
  printf("COMPUTER wins because PAPER beats ROCK.\n");
  compWins++;
}
if (userInput == 2 && computerInput == 3){
  printf("COMPUTER wins because SCISSORS beats PAPER.\n");
  compWins++;
}

}// for loop ends
printf("In 10 games, computer won %d times and user won %d times\n", compWins, userWins );
  return 0;
}
