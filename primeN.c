#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10000


int main(void)

{

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






  /* write out the result  - DO NOT CHANGE THIS */

  for(i=0;i<L;i++)
    printf("%d ",a[i]);

  printf("\n");

}
