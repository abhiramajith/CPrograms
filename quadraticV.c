#include <stdio.h>
#include <math.h>

 /*
 Name: Abhiram Ajith - 20364441
 Date: 19/10/2020
 Title: A program that attempts to solve quadratic equations with a 'b' value far greater than 'a' or 'c'
 Input: 3 variables a, b and c
 Expected output: The number of real roots and the values of each root
 */

int main(void){

/*Declaring variables for quadratic*/
double a, b, c ;

/* Declaring variables to store root values*/
double r1, r2;

/*Declaring variables to store equated root values*/
double v1, v2;

/* Asking for user to input values for a, b and c*/
printf("Please enter the value for coefficient a:\n");
/* Retrieving the value inputted by the user*/
scanf("%lf", &a);

printf("Please enter the value for coefficient b:\n");
scanf("%lf", &b);

printf("Please enter the value for coefficient c:\n");
scanf("%lf", &c);

/*Calculating the discriminant to determine if the roots are real, equal or imaginary*/
double discriminant = (b*b)-(4.0*a*c);

/* Calculating the roots of the equation using the -b formula
For this question I changed the quadratic formula to instead use the citardauq formula
This is because with the standard formula if 4ac is very small in comparison to b there will be a loss of precision
So to combat this I used this formula which calculates the root more precisely and then calculated the 2nd root using the 1st root
to ensure the level of precision stays the same*/
r1 = 2.0*c / (-b - sqrt((b*b)-4.0*a*c)) ;
r2 = c / (a * r1) ;



/* Calculating the value of the quadratic equation at the roots*/
v1 = a*r1*r1 + b*r1+ c;

v2 = a*r2*r2 + b*r2 + c;

/* A series of If statements that output the roots of the equation depending on the number of real roots*/
if (discriminant > 0) {
  printf("The number of real roots is 2.\n");
  printf("The value of the first root is  %.10lf.\n", r1);
  printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n", r1, v1);
  printf("The value of the second root is  %.10lf.\n", r2);
  printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n", r2, v2);
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
