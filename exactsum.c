#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int n;  /* The number of lengths */
  int x; /* The target length */
  int *lengths; /* The array of available lengths */
  int i;
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

     Nano_x= x*10000000;
     for(i=0;i<n;i++){
       if ((lengths[i] + lengths[n-1])>Nano_x){
         printf("%d + %d = %d\n", lengths[i], lengths[n-1], lengths[i]+lengths[n-1] );
         n=n-1;
       }
       if ((lengths[i] + lengths[n-1])<Nano_x ){
          printf("%d + %d = %d\n", lengths[i], lengths[n-1], lengths[i]+lengths[n-1] );
          i++;
       }
       if ((lengths[i] + lengths[n-1])==Nano_x) {
         printf("FOND3\n");
       }
       }




  /* finished work, so free up the dynamic array
     This should be done whenever dynamic allocation
     is used.
  */
  free(lengths);
  return 0;

}
