#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
     bool found = false;


     Nano_x= x*10000000;
     i=0;
     j=n;
     while (!found){
       if ((lengths[i] + lengths[j])==Nano_x) {
         printf("Found: %d + %d == %d\n", lengths[i], lengths[j], lengths[i]+lengths[j] );
         found = true;
       }
       else if ((lengths[i] + lengths[j]) < Nano_x){
         i++;
       }
       else{
         j--;
       }
     }

    /* for (i=0;i<n;i++){
         for (j=n;j>=0;j--){
           if ((lengths[i] + lengths[j])==Nano_x) {
             printf("Found: %d + %d == %d\n", lengths[i], lengths[j], lengths[i]+lengths[j] );
             found = true;
             return -1;
           }

         }

       }

      if (!found){
        printf("No matching pair found\n");
       }
*/


  /* finished work, so free up the dynamic array
     This should be done whenever dynamic allocation
     is used.
  */
  free(lengths);
  return 0;

}
