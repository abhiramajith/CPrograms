
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int N;
  int i, j, k;
  int x1, x2;
  int sum, sumLargest, sumMax;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */

  if (N<1){
    printf("Largest sum is 0 obtained from the subsequence [  ]\n");
    return -1;

  }

  sumMax = a[0];
  sumLargest = a[0];

  for (i = 1;i < N; i++ ){

    if (sumLargest<a[i]){
      sumLargest = a[i];


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

if ( sumMax > sumLargest){
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
