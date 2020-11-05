#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int N;
  int i;
  int sum = 0;
  int array;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */
  for(i = 0;i < N; i++){
    printf("%d ", a[i]);
}

for (i = 0;i < N; i++ ){

  if (a[i]>sum){
    sum = a[i];
  }
  if(i < N-1 && a[i] + a[i+1] > sum){
    sum = a[i] + a[i+1];
  }


}
printf("\n%d", sum);
  return 0;
}
