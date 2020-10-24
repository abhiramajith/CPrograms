#include <stdio.h>
#include <math.h>
/*
Name: Abhiram Ajith - 20364441
Date: 19/10/2020
Title: A program that calculates the rate of interest the compound interest formula
Input: 3 variables amount, principal and years
Expected output: The rate of interest reqy=uired to get the amount
*/

int main(void){

/*Declaring the variables*/
double const k = 12;
/*Amount*/
double a;
/*Principal*/
double p;
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


printf("Please enter the principal:\n");

scanf("%lf", &p);

if (p<0){
  printf("Invalid principal.\n");
  return -1;
}


printf("Please enter the number of years:\n");

scanf("%lf", &n);

if (n<=0){
  printf("Invalid number of years.\n");
  return -1;
}
/*Calculating the formula*/
double rate = (100*k)*(pow((a/p),(1/(n*k))))-(100*k);
/*printing the output*/
printf("The rate is %.2f\n",rate );

return 0;
}
