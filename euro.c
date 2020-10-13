#include <stdio.h>


int main(void)
{
/* declaring the variable for Euro*/
  double Euro;

/* Asking for user to input amount of Euro */
  printf("Please enter the amount in Euros:\n");

/*Scanning for the inputted Euro amount*/
  scanf("%lf", &Euro);

/* Assigning the variable sterling with the correct conversion rate*/
  double Sterling = Euro*0.8;

/* Placing the variables in the correct position and calling them at the end*/
  printf("%.2f Euro is equivalent to %.2f pounds sterling", Euro,Sterling);
  return 0;


}
