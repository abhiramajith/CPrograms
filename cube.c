#include <stdio.h>


int main(void)
{
  double width;


  printf("Please enter the width of the cube:\n ");
  scanf("%lf", &width);
  printf("The volume is %lf \n", width*width*width);
  return 0;
}
