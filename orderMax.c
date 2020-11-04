#include <stdio.h>

int main(void) {

    double w, x, y, z;
    double temp;// A variable to store values w, x, y or z
    /* you may need some extra variables - but NO arrays please! */

    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
 if (w < x){  // To sort these numbers they must be swapped depending on their sizes
   temp = w; // To ensure a value doesnt get overwritten it is stored in the variable temp
   w = x;   // To swap the two numbers first you assign one to the other
   x = temp;// Then the other variable is assigned the temp value.
 }

 if (y < z){
   temp = y;
   y = z;
   z = temp;
 }

 if (w < y){
   temp = w;
   w = y;
   y = temp;
 }

if (x < z){
  temp = x;
  x = z;
  z = temp;
}

if (x < y){
  temp = x;
  x = y;
  y = temp;
}

    /* Do not change the following output statement */
    printf("%.1f %.1f %.1f %.1f\n",w, x, y, z);
