#include <stdio.h>

#define MAX_MSG_SIZE 256
void capitalise(char str[]);
int main(void)
{
  char msg[MAX_MSG_SIZE+1];
  /* the fgets function is used to read a string from the console */
  fgets(msg, MAX_MSG_SIZE, stdin);

  /* complete your answer here */
  /*
  Name: Abhiram Ajith - 20364441
  Date: 24/11/2020
  Title: A program that converts a string containing lowercase letters to uppercase
  Expected output: hello world! should return HELLO WORLD! 
  */
  int i;//loop iterator

  //loops while the string value for i is not equal to the terminator
 for (i=0; msg[i]!= '\0'; i++){
   if (msg[i] >= 'a' && msg[i]<= 'z'){//if the i index of the string is greater than the ascii value of 'a' and less than 'z'
                                      //i.e if the ith index is a lowercase letter
     msg[i]+= 'A'-'a';// adds -32 to the value of msg[i] making it uppercase as any lowercase letter -32 is its respective uppercase in ascii
   }
 }
 printf("%s", msg);
  return 0;
}
