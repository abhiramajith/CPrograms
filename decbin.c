#include <stdio.h>
#include <math.h>
#define size 10
 /*
 Name: Abhiram Ajith - 20364441
 Date: 03/11/2020
 Title: to read an integer N and write out the base 2 representation of N

 Expected output: e.g. if N=8 then the program should print to the screen 1000
 */

int main(void){
  int count, n, Num, digit, i;
  int a[size];


  scanf("%d", &n);

   digit = 0;
   Num = n;
   count = -1;

   if (n == 0){
     printf("0");
   }
for(i = 0;Num > 0; i++){

  digit = Num % 2;
  a[i] = digit;
  count ++ ;
  Num = Num / 2;

}

printf("%d ", n);
for (i = count ; i >= 0; i-- ){
  printf("%d", a[i]);

}
return 0;
}
