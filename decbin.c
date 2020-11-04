#include <stdio.h>
#include <math.h>
#define size 8
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
   i = 0;
   digit = 0;
   Num = n;
while (Num >= 1){
  digit = Num % 2;
  printf("%d\n", digit);
  Num = Num / 2;
  printf("%d\n", Num);
  a[i] = digit;
  i = i + 1;
}
printf("%d", a[i]);


return 0;
}
