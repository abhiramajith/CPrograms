#include <stdio.h>

int main(void) {

    double w, x, y, z;
    /* you may need some extra variables - but NO arrays please! */

    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
    if (w >= x && w >= y && w >= z) {
      a = w;
    }

    if ( x>= w && x >= y && x >= z){
      a = x;
    }

    if ( y>= w && y >= x && y >= z){
      a = y;
    }

    if ( z>= w && z >= x && z >= y){
      a = z;
    }





    /* Do not change the following output statement */
    printf("%.1f %.1f %.1f %.1f\n",w, x, y, z);

    return 0;
}
