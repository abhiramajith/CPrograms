#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10000


int main(void)

{
  int i;
  int j;
  int a[MAX_SIZE];
  int N;
  int temp;

  int L;  /* the current size of the list */

   /* read in the upper limit. Keep reading until
     a valid number between 3 and the maximum that
     can be handled by the array is entered */

  printf("Enter the upper limit:\n");
  do {
      scanf("%d", &N);
    } while (N<3 || N>MAX_SIZE+2);

  /* write your solution here ... */
  L=N-2;
  int b[MAX_SIZE];

for(i=1;i<L;i++){
  a[0]=2;
  a[i]=i+2;
}

for(i=0;i<L;i++){
  for(j=i+1;j<L-1;j++){
    if (a[j+1]%a[i]==0){
      temp = a[j+1];
      a[j+1]=a[j+2];
      a[j+2]=temp;
  L--;
    }

    }
  }




  /* write out the result  - DO NOT CHANGE THIS */

  for(i=0;i<L;i++)
    printf("%d ",a[i]);

  printf("\n");

}
