
#include <stdio.h>
#include <math.h>
 /*
 Name: Abhiram Ajith - 20364441
 Date: 19/10/2020
 Title: A program that solves quadratic equations using the -b formula
 Input: 3 variables a, b and c
 Expected output: The number of real roots and the values of each root
 */

int main(void){

/*Declaring variables for quadratic*/
double a ;
double b ;
double c ;

/* Asking for user to input values for a, b and c*/
printf("Please enter the value for coefficient a:\n");
/* Retrieving the value inputted by the user*/
scanf("%lf", &a);

printf("Please enter the value for coefficient b:\n");
scanf("%lf", &b);

printf("Please enter the value for coefficient c:\n");
scanf("%lf", &c);

/* Calculating the roots of the equation using the -b formula*/
double r1 = (-b + sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
double r2 = (-b - sqrt(pow(b,2)-4.0*a*c))/(2.0*a);

/*Calculating the discriminant to determine if the roots are real, equal or imaginary*/
double discriminant = (b*b)-(4*a*c);

/* A series of If statements that output the roots of the equation depending on the number of real roots*/
if (discriminant > 0) {
  printf("The number of real roots is 2.\n");
  printf("The value of the first root is  %.5f.\n", r1);
  printf("The value of the second root is  %.5f.\n", r2);
}
else if (discriminant < 0){
  printf("The number of real roots is 0.\n");
}
else if (discriminant == 0){
  printf("The number of real roots is 1.\n");
  printf("The value of the first root is  %.5f.\n", r1);
}


return 0;
}
