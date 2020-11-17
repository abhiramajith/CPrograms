#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5000

int main(void)
{
  int i, k, N;
  double a[MAX_SIZE];
  double threshold;
  FILE *fp;

  printf("Enter number of values to read from floats.txt\n");
  scanf("%d", &N);
  printf("Enter the threshold value\n");
  scanf("%lf", &threshold);
  printf("Enter the value of k\n");
  scanf("%d", &k);
  fp = fopen("floats.txt", "r");
  for (i = 0;i<N;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);

  /* write your solution here */



  return 0;
}
