#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5000

int main(void)
{
  int h, i, j, k, N, maxindx;
  double a[MAX_SIZE];
  double b[MAX_SIZE];
  double threshold;
  double temp, max;
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
  int count=0;

    for(h=0;h<N+1;h++){
      if (a[h]<threshold){
        b[h]=a[h];
        count++;
      }
    }
    /* Run the outer loop k times, each time around the outer loop
         the (j+1)th largest value is found and placed in position j
         of the loop */
    for (j=0;j<N+1;j++)
      {
          max = b[j];
          maxindx=j;

        /* the inner loop starts are i=j+1 i.e. it starts at
  	 the next element of the array AFTER the position in which
  	 the previous largest value was placed. Therefore it finds
  	 the next largest value, excluding all values already found
  	 and stored in b[0],...,b[j]
        */
        for (i = j+1;i<MAX_SIZE;i++)
  	{
  	  if (b[i]>max )
  	    {
  	      max = b[i];
  	      maxindx = i;
  	    }

      }

        /* swap b[j] and b[maxindx] */
        temp = b[j];
        b[j] = b[maxindx];
        b[maxindx] = temp;

      }
      printf("%d\n",count );
      if (count<=k){
        printf("The array does not contain %d numbers less than %.5lf\n",k,threshold );
      }
      else{
        printf("The k=%d largest value in the array that is less than %.5lf is %.5lf\n",k, threshold, b[k-1]);
}
  return 0;
}
