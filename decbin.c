#include <stdio.h>
#include <math.h>
#define size 30
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
while (Num > 1){
  Num = floor(Num / 2);
  digit = Num % 2;
  for(i = 0 ; i < size ; i++){
    a[i] = digit;
  }
  printf("%d ", a[i]);
}
return 0;
}
