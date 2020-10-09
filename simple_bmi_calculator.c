#include <stdio.h>

int main (void)
{
  double Height;
  int Weight;

  printf("Please enter your height in metres :\n");
  scanf("%lf", &Height );
  printf("Please enter your weight in kg:\n");
  scanf("%d", &Weight );

  double BMI = Weight/(Height*Height);
  printf("Your BMI is %.1f \n", BMI);

  return 0;





}
