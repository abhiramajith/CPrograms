#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
/*
Name: Abhiram Ajith - 20364441
Date: 17/11/2020
Title: A program that finds and displays the average of the values in an array and the values in the array that are greater than the average.
Expected output: given an array [1 2 3 4 5 6] the output should be 3.500 and 4 5 6 .
*/
int main(void) {

    int array[MAX_SIZE];
    int N;
    int i;
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &array[i]);
    }
    /* complete the program here */
    double sum = 0;
    // This loop iterates through the array and adds each successive value to sum
    for (i=0;i<N;i++){
      sum += array[i];

    }
    double average = (sum / N);
    printf("The average is %.3f\n", average);


printf("The values in the array that are bigger than the average are ");
    for (i=0;i<N;i++){
      if (array[i] > average){
        printf("%d ", array[i]);

      }
    }


    return 0;
}
