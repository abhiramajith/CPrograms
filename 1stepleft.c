#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int i;
    int N;
    int a[MAX_SIZE];

    /* Do not change the input section below */

    scanf("%d", &N);
    for (i=0;i<N;i++) {
        scanf("%d", &a[i]);
    }

    /* insert your answer here */
    a[N] = a[0];// Sets the nth value of the array as a[0]
    for (i = 0; i < N; i++){
      a[i] = a[i + 1];// assigns each iterated value of a[i+1] to a[i]
        }

    /* do not change the output section below */

    for (i=0;i<N;i++) {
        printf("%d ", a[i]);
    }

    return 0;

}
