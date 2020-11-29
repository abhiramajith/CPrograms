#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5000

int main(void)
{
  int N;
  int a[MAX_SIZE];
  int i;

  scanf("%d",&N);
  for (i=0;i<N;i++)
    {
      scanf("%d", &a[i]);
    }


  /* fill in your answer here ... */
  /*
  Name: Abhiram Ajith - 20364441
  Date: 24/11/2020
  Title: A program that finds a value in an integer array of length N that
        occurs at least (N/2 + 1) times, if it exists.
  Expected output:[8 2 3 2 2 2 3 2 1] should return "2 appears more than 4 times in the array"
  */

  int unique_vals[MAX_SIZE], counts[MAX_SIZE];// unique_vals[] holds the unique values in an array and counts[] holds the frequency of each value in the array
  bool counted[MAX_SIZE];//boolean array that keeps track of what elements have beem entered into unique_vals[]
  int j;
  int unique_num=0;
  int x;
  for (i=0;i<N;i++){
    counted[i]=false;
    counts[i]=0;
  }

  for (i=0;i<N;i++){
    x=a[i];
    if (!counted[i]){
      counts[unique_num]++;
      counted[i] = true;
      for (j=i+1; j<N;j++){
        if (a[j] == x){
          counted[j]=true;
          counts[unique_num]++;
        }
      }
      unique_vals[unique_num++]=x;
    }
  }

  for (i=0; i<unique_num;i++){// This loops for the size of unique numbers in the array
    if (counts[i]> N/2){// If there is a number that appears more than N/2 times print the following
      printf("%d appears more than %d times in the array.\n", unique_vals[i], N/2 );
      return -1;
    }

  }

//if there is no number this is printed
  printf("No value appears more than %d times in the array.\n", N/2);


  return 0;
}
