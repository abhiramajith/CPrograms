#include <stdio.h>


int main(void)
{
/*Declaring the variable*/
  double Fahrenheit;

/* Asking for user input */
  printf("Please enter the temperature in Fahrenheit:\n");

/*retrieving input*/
  scanf("%lf", &Fahrenheit);

  double Celsius = (Fahrenheit - 32)* 5.0 / 9.0;

  printf("%.2f degrees Fahrenheit is equivalent to %.2f degrees Celsius", Fahrenheit, Celsius);
  return 0;


}

fahrenheit = celsius*(9.0/5.0)+32;
