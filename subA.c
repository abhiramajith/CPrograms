
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int N;
  int i,j;
  int sum, sumMax;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */

  sumMax = a[0];

  for (i=0;i<N;i++){
    sum = 0;

    for (j=i;j<N;j++){
      sum+= a[j];
      printf("%d\n", sum);

    }
  }

printf("\nLargest sum is %d obtained from the subsequence [] ", sum);
return 0;
}
