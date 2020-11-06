#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int b[MAX_SIZE];
  int N;
  int i;
  int sum;
  int total0 = 0;
  int total1 = 0;
  int total2 = 0;
  int total3 = 0;
  int total4 = 0;
  int count;
  int x, x2, x3;

  /* read in the array */
  scanf("%d", &N);
  for (i=0;i<N;i++)
    scanf("%d", &a[i]);

  /* complete your program here ... */
  for(i = 0;i < N; i++){
    printf("%d ", a[i]);
}

if (N < 1){
  sum = 0;

}

sum = a[0];

for (i = 1;i < N; i++ ){

  if (sum<a[i]){
    sum = a[i];
    x = a[i];
    total0 = sum;
  }
}




for (i = 0;i < N; i++ ){
  if(i < N-1 && a[i] + a[i+1] > sum){
    sum = a[i] + a[i+1];
    x = a[i];
    x2 = a[i+1];
    total1 = sum;
  }
  if (i < N-2 && a[i] + a[i+1] + a[i+2] > sum ){
    sum = a[i] + a[i+1] + a[i+2];
    total2 = sum;
    x = a[i];
    x2 = a[i+1];
    x3 = a[i+2];

  }

  total3 += a[i];
  if (total3 > sum){
    sum = total3;
    total3 = sum;

  }
}


for (i = N-1;i > 0; i-- ){
  total4 += a[i];
  if (total4 > sum){
    sum = total4;
    total4 = sum;

  }

  if (total0 > total1 && total0 > total2 && total0 > total3 && total0 > total4 && i == 1){
    printf("\nLargest sum is %d obtained from the subsequence [ %d ] ", sum, x);
}
    if (total1 > total0 && total1 > total2 && total1 > total3 && total1 > total4 && i == 1){
      printf("\nLargest sum is %d obtained from the subsequence [ %d %d ] ", sum, x,x2);
}


}

printf("\nLargest sum is %d obtained from the subsequence [] ", sum);

  return 0;
}
