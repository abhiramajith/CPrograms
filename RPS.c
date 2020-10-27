#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int randNum;
  int seed;

  printf("Enter a seed for the random number generator.\n");

  scanf("%d", &seed);

  srand(seed);

  for (i=0; i<10; i++) {

    randNum = rand()%3+1;
    printf("A random number between 1 and 3: %d\n", randNum );
  }
}
