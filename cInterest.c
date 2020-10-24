#include <stdio.h>
#include <math.h>
/*
Name: Abhiram Ajith - 20364441
Date: 19/10/2020
Title: A program that calculates compound interest using the formula
Input: 3 variables Principal, rate and years
Expected output: The amount accumalated at the end of n years
*/

int main(void){

/*Declaring the variables*/
double const k = 12;
/* Principal*/
double p;
/*Rate of interest*/
double r;
/*Number of years*/
double n;

/* Asking for user to input values for p, r and n*/
printf("Please enter the principal:\n");
/* Retrieving the value inputted by the user*/
scanf("%lf", &p);
/* Checking if the principal is valid*/
if (p<0){
  printf("Invalid principal.\n");
  return -1;
}


printf("Please enter the rate:\n");
scanf("%lf", &r);
/*There are two possibilities so OR is used*/
if (r<=0 || r>=100){
  printf("Invalid rate.\n");
  return -1;
}


printf("Please enter the number of years:\n");
scanf("%lf", &n);

if (n<=0){
  printf("Invalid number of years.\n");
  return -1;
}
/*Calculating the formula*/
double amount = p*(pow(1+(r/(100*k)),n*k));
/*printing the output*/
printf("The amount is %.2f\n",amount );

return 0;
}
