#include <stdio.h>
#include <math.h>
/*
Name: Abhiram Ajith - 20364441
Date: 19/10/2020
Title: A program that calculates the number of years from a compound interest formula
Input: 3 variables amount, rate and principal
Expected output: The number of years the money is left for
*/

int main(void){

/*Declaring the variables*/
double const k = 12;
/*Amount*/
double a;
/*Principal*/
double p;
/*Interest rate*/
double r;

/* Asking for user to input values for a, r and p*/
printf("Please enter the amount:\n");
/* Retrieving the value inputted by the user*/
scanf("%lf", &a);
/* Checking if the amount is valid*/
if (a<0){
  printf("Invalid amount.\n");
  return -1;
}


printf("Please enter the principal:\n");

scanf("%lf", &p);

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
/*Calculating the formula, I split it into two to avoid confusion*/
double x = log(a/p);
double y = ((k)*(log(1+(r/100)/(k))));
double year = x/y;

/*printing the output*/
printf("The number of years is %.2f\n",year );

return 0;
}
