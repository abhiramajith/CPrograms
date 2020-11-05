#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int b[MAX_SIZE];
  int N;
  int i;
  int sum;
  int sum2 = 0;
  int sum3 = 0;
  int count;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */
  for(i = 0;i < N; i++){
    printf("%d ", a[i]);
}

if (N == 0){
  sum = 0;
  goto label;
}

sum = a[0];

for (i = 1;i < N; i++ ){

  if (sum<a[i]){
    sum = a[i];

    printf("\n%dlargest", sum);
  }
}




for (i = 0;i < N; i++ ){
  if(i < N-1 && a[i] + a[i+1] > sum){
    sum = a[i] + a[i+1];
    printf("\n%dfor2", sum);
}
  if (i < N-2 && a[i] + a[i+1] + a[i+2] > sum ){
    sum = a[i] + a[i+1] + a[i+2];
    printf("\n%dfor3", sum);
  }


  sum2 += a[i];
  if (sum2 > sum){
    sum = sum2;
    printf("\n%dfor4", sum);
  }
}



for (i = N-1;i > 0; i-- ){
  sum3 += a[i];
  if (sum3 > sum){
    sum = sum3;

  }
}
label: printf("\nLargest sum is %d obtained from the subsequence [  ] ", sum);

  return 0;
}
