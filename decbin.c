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
  int n, Num, digit, i;
  int a[size];

  printf("Enter a number in base 10:\n");
  scanf("%d", &n);

   digit = 0;
   Num = n;

for(i = 0;Num > 0; i++){

  digit = Num % 2;
  a[i] = digit;

  Num = Num / 2;

  printf("%d", a[i]);
}



return 0;
}
