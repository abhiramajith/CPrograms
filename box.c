#include <stdio.h>


int main(void)
{
  double height;
  double width;
  double depth;

  printf("Please enter the height:\n ");
  scanf("%lf", &height);
  printf("Please enter the width:\n ");
  scanf("%lf", &width);
  printf("Please enter the depth:\n ");
  scanf("%lf", &depth);
  printf("The volume is %lf \n", height*width*depth);
  return 0;


}
