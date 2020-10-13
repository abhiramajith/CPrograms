#include <stdio.h>


int main(void)
{
  double PI = 3.14159;

  /* declare the other required variables */
  double radius;


  /* get the input from the console */
  printf("Please enter the radius:\n");
  scanf("%lf", &radius);



  /* compute the area */
  double area = radius*radius*PI;


  /* write out the answer */
  printf("The area of the circle is %f\n", area);
  return 0;
}
