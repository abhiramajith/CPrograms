#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int N;
  int i, j, k;//
  int x1, x2;// These variables hold the values of i and j for printing out the correct sub array
  int sum ;//holds the sum of the largest possible subarray
  int aLargest; //holds the value of the largest number in the array
  int sumMax;//holds the value of largest continous sub array

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

  for (i = 1;i < N; i++ ){//This for loop calculates the largest number in the array

    if (aLargest<a[i]){
      aLargest = a[i];
    }
  }


  for (i=0;i<N;i++){//This for loop takes one element from the array at a tim
    sum = 0;

    for (j=i;j<N;j++){//This for loop sums the different possible sub arrays
      sum+= a[j];


      if (sum > sumMax){
        sumMax = sum;
        x1 = i;//notes the ith value of the array
        x2 = j;//notes the jth value of the array

      }

    }
  }

if ( sumMax > aLargest){
printf("\nLargest sum is %d obtained from the subsequence [", sumMax);
for (k=x1;k<=x2;k++){//This for loop prints the numbers corresponding to the largest sub array
  printf(" %d", a[k]);

}
printf(" ]");
}

//if the largest sub array is less than the largest value in the array the largest value is printed
else{
  printf("\nLargest sum is %d obtained from the subsequence [ %d ]", aLargest, aLargest);
}
return 0;
}
