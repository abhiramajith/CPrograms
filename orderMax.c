#include <stdio.h>

int main(void) {

    double w, x, y, z;
    double temp;
    /* you may need some extra variables - but NO arrays please! */

    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
 if (w < x){
   temp = w;
   w = x;
   x = temp;
 }

 if (x < y){
   temp = x;
   x = y
   y = temp;
 }



    /* Do not change the following output statement */
    printf("%.1f %.1f %.1f %.1f\n",w, x, y, z);

    return 0;
}
