#include <stdio.h>


int main(void)
{
/* assigning base and height variables*/
  double base;
  double height;
/*asking for user input for base variable*/
  printf("Please enter the length of the base:\n");
  scanf("%lf", &base);
/*asking for user input for height variable*/
  printf("Please enter the height:\n");
  scanf("%lf", &height);
/*Printing the area value whihc is calculated at the end*/
  printf("The area is %lf \n", (base*height)*0.5);
  return 0;


}
