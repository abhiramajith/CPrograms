#include <stdio.h>
#include <math.h>
/*
Name: Abhiram Ajith - 20364441
Date: 19/10/2020
Title: A program that calculates the principal of the compound interest formula
Input: 3 variables amount, rate and years
Expected output: The principal inputted at the start of n years
*/

int main(void){

/*Declaring the variables*/
double const k = 12;
/*Amount*/
double a;
/*Interest rate*/
double r;
/*Number of years*/
double n;

/* Asking for user to input values for a, r and y*/
printf("Please enter the amount:\n");
/* Retrieving the value inputted by the user*/
scanf("%lf", &a);
/* Checking if the amount is valid*/
if (a<0){
  printf("Invalid amount.\n");
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
double principal = a/(pow(1+(r/(100*k)),n*k));
/*printing the output*/
printf("The principal is %.2f\n",principal );

return 0;
}
