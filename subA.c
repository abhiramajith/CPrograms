#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int N;
  int i, j, k;//
  int x1, x2;// These variables hold the values of i and j for printing out the correct sub array
  int sum ;//holds the value of the largest continous sub array
  int aLargest; //holds the value of the largest number in the array
  int sumMax;//

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */
  /*
  Name: Abhiram Ajith - 20364441
  Date: 10/11/2020
  Title: A program that reads in an array of size N, and computes the largest continous
         subarray.
  Expected output: Example [-4 7 2 1 9 -3] should return [7 2 1 9]
  */

//Edge case
  if (N<1){
    printf("Largest sum is 0 obtained from the subsequence [  ]\n");
    return -1;

  }

  sumMax = a[0];
  aLargest = a[0];

  for (i = 1;i < N; i++ ){

    if (aLargest<a[i]){
      aLargest = a[i];
    }
  }


  for (i=0;i<N;i++){
    sum = 0;

    for (j=i;j<N;j++){
      sum+= a[j];


      if (sum > sumMax){
        sumMax = sum;
        x1 = i;
        x2 = j;

      }

    }
  }

if ( sumMax > aLargest){
printf("\nLargest sum is %d obtained from the subsequence [", sumMax);
for (k=x1;k<=x2;k++){
  printf(" %d", a[k]);

}
printf(" ]");
}


else{
  printf("\nLargest sum is %d obtained from the subsequence [ %d ]", sumLargest, sumLargest);
}
return 0;
}
