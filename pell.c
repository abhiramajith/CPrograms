#include <stdio.h>
#include <math.h>

 /*
 Name: Abhiram Ajith - 20364441
 Date: 03/11/2020
 Title: A program that reads in an integer, N, and computes the first N Pell numbers
  and outputs them in a single line, with each number separated by a space.
 Expected output: The corresponding pell numbers based on the user's input.
 */

int main(void){

int n;// Variable to store numbe rof pell numbers to output

printf("Enter how many pell numbers to print:\n");
scanf("%d", &n);

  int x[n], i;// initialising na array called x of size n given by the user

  for(i = 0;i < n; i++){
    if ( i == 0){
      x[0] = 0;// the first pell number is 0 and does not use the formula
    }
    if ( i == 1){
      x[1] = 1;// the second pell number is 1 and does not use the formula
    }
    else if (i > 1){
    x[i] = 2*(x[i-1]) + ( x[i - 2]);// for every pell number up to n numbers
  }
    printf("%d ", x[i]);// prints the array up to n numbers
  }
  return 0;
}
