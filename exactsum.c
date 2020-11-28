#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Name: Abhiram Ajith - 20364441
Date: 24/11/2020
Title: A program that finds from amongst a set of positive lengths in nanometres, a pair of
       lengths that sum exactly to a target length that is given in centimetres.
Expected output: Target length = 15
                 Found: 70214190 + 79785810 == 150000000
*/


int main(void)
{

  int n;  /* The number of lengths */
  int x; /* The target length */
  int *lengths; /* The array of available lengths */
  int i, j;
  int whichfile=1;

  FILE *fp;

  scanf("%d", &whichfile);

  switch (whichfile) {
  case 1:
    fp = fopen("testcase_small_sorted.txt", "r");
    break;
  case 2:
    fp = fopen("testcase_large_sorted.txt", "r");
    break;
  case 3:
    fp = fopen("testcase_small_nomatch_sorted.txt","r");
    break;
  case 4:
    fp = fopen("hidden_small_sorted.txt","r");
    break;
  case 5:
    fp = fopen("hidden_large_sorted.txt","r");
    break;
  }

  fscanf(fp, "%d", &x);
  fscanf(fp, "%d", &n);

  /* create the lengths array dynamically.
     We haven't covered this yet. It is enough to
     know that after the execution of the statement
     below, lengths is now just like an ordinary
     int array of size n */
  lengths = (int *)malloc(sizeof(int)*n);
  if (!lengths)
    {
      printf("ERROR: Insufficient memory for lengths array.\n");
      return -1;
    }

  for (i=0;i<n;i++)
    fscanf(fp, "%d", &lengths[i]);


  fclose(fp);

  /* Now all the input data has been read in
     search for the required pair of lengths... */
     int Nano_x;
     Nano_x= x*10000000;// as the target length is given in centimetres it must be converted to nanometers
     i = 0; // start of the array
     j = n-1;// end of the array

//loops while i is less than j
     while (i < j){
       if ((lengths[i] + lengths[j])==Nano_x){//pair is found
         printf("Found: %d + %d == %d\n", lengths[i], lengths[j], lengths[i]+lengths[j] );
         return -1;
       }

       if ((lengths[i] + lengths[j]) < Nano_x){//if total is less than sum increment i
         i++;
       }
       else{//if total is more than sum decrement j
         j--;
       }
     }

     printf("No matching pair found\n");//if no pair is found



  /* finished work, so free up the dynamic array
     This should be done whenever dynamic allocation
     is used.
  */
  free(lengths);
  return 0;

}
