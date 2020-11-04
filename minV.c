#include <stdio.h>

int main(void) {

    double w, x, y, z;
    double min;  /* the variable to hold the minimum value */
    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
if (w <= x && w <= y && w <= z){ //Under these conditions w is the minimum
  min = w;
}

if (x <= w  && x <= y && x <= z){ // "<=" accounts for if the minimum value is repeated
  min = x;
}

if (y <= w  && y <= x && y <= z){
  min = y;
}

if (z <= w  && z <= x && z <= y){
  min = z;
}


    /* Do not change the following output statement */
    printf("%f\n",min);

    return 0;
}
