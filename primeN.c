#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10000
/*
Name: Abhiram Ajith - 20364441
Date: 17/11/2020
Title: A program to find all the prime numbers less than a given positive number N.
Expected output: The prime numbers from 2 up to any number N.
*/


int main(void)

{
  int i;
  int j;
  int a[MAX_SIZE];
  int N;
  int L;  /* the current size of the list */

   /* read in the upper limit. Keep reading until
     a valid number between 3 and the maximum that
     can be handled by the array is entered */

  printf("Enter the upper limit:\n");
  do {
      scanf("%d", &N);
    } while (N<3 || N>MAX_SIZE+2);

  /* write your solution here ... */
  L=N-2;//The size of the list not inlcuding 1 or 0
  int k ;

//Filling the array with values of 2 up to N
for(i=0;i<N-2;i++){
  a[i]=i+2;
}

//The outer loop selects one value from the array to compare all the other values by
for (i=0;i<L;i++){
  k=i+1;// k is the postion after a[i] to where other primes will be placed

  //The inner loop checks each value after a[i] to see if it's not divisible
  //If it is not divisible the value will be placed at the position a[k]
  for (j=i+1;j<L;j++){
    if (a[j]%a[i]!=0){
      a[k]=a[j];

      k++;//k is increased by one so the next value will be placed after the previous
    }

    }
L=k;//The size of the resultant array is the number of times k has been iterated
  }


  /* write out the result  - DO NOT CHANGE THIS */

  for(i=0;i<L;i++)
    printf("%d ",a[i]);

  printf("\n");

}
