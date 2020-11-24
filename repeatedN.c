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
  int unique_vals[MAX_SIZE], counts[MAX_SIZE];
  bool counted[MAX_SIZE];
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

  for (i=0; i<unique_num;i++){
    if (counts[i]>=((N/2)+1)){
      printf("%d appears more than %d times in the array.\n", unique_vals[i], N/2 );
      return -1;
    }
    else{
      printf("No value appears more than %d times in the array.\n", N/2);
      return -1;
    }

  }

  return 0;
}
