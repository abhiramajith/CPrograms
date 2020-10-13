#include <stdio.h>

int main(void)
{
/* Declaring the radius and pi variables for this program*/
  double r;
  double pi = 3.14159;

/*Asking user to input value for radius*/
  printf("Please enter the radius of the sphere:\n");

/*Retrieving radius inputted by user*/
  scanf("%lf", &r);

/*Calculating the volume and assigning it to the name volume*/
  double volume = 4.0/3.0*pi*r*r*r;

/*Printing the volume*/
  printf("The volume is %f \n",volume);
  return 0;


}
