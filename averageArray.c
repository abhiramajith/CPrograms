#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
/*
Name: Abhiram Ajith - 20364441
Date: 17/11/2020
Title: A program that finds and displays the average of the values in an array.
Expected output: given an array [1 2 3 4 5 6] the output should be 3.500
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
    printf("The average is %.3f\n", average);//prints average to 3 decimal places

    return 0;
}
