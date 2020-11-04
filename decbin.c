#include <stdio.h>
#include <math.h>
#define size 30
 /*
 Name: Abhiram Ajith - 20364441
 Date: 03/11/2020
 Title: to read an integer N and write out the base 2 representation of N

 Expected output: e.g. if N=8 then the program should print to the screen 1000
 */

int main(void){
  //Declaring variables
  int count, n, Num, digit, i;
  int a[size];


  scanf("%d", &n);// Reads user input for number they want to convert to binary

//Assigning initial values
   digit = 0;
   Num = n;
   count = -1;//computes length of array


   if (n == 0){
     printf("0 ");
   }

/*This loop calculates each binary number that corrseponds to the user input
  and adds it to the array, but it will need to be reversed */
for(i = 0;Num > 0; i++){

  digit = Num % 2;// gets the remainder of Num and assigns it to digit
  a[i] = digit;// assigns the digit value (1 or 0) to the ith position on the array
  count ++ ;// adds one to the counter
  Num = Num / 2;// floor divides Num to get the next value to be calculated

}

printf("%d ", n);//prints user input

/*This loop uses the count variable to print the array in reverse order as required*/
for (i = count ; i >= 0; i-- ){
  printf("%d", a[i]);

}
return 0;
}
