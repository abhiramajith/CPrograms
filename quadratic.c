
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

double a ;
double b ;
double c ;


printf("Please enter the value for coefficient a:");
scanf("%lf", &a);
printf("Please enter the value for coefficient b:");
scanf("%lf", &b);
printf("Please enter the value for coefficient c:");
scanf("%lf", &c);

double r1 = (-b + sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
double r2 = (-b - sqrt(pow(b,2)-4.0*a*c))/(2.0*a);

double discriminant = (b*b)-(4*a*c);
if (discriminant > 0) {
  printf("The number of real roots is 2.\n");
  printf("The value of the first root is  %f.\n", r1);
  printf("The value of the second root is  %f.\n", r2);
}
else if (discriminant < 0){
  printf("The number of real roots is 0.");
}
else if (discriminant == 0){
  printf("The number of real roots is 1.\n");
  printf("The value of the first root is  %f.\n", r1);
}


return 0;



}
