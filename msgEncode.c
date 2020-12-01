#include <stdio.h>
#define MAX_STR_LEN 256
int main(void)
{
  /* keep the perm[] array fixed as it is here, though
     your program should work for any permutation array */
  char perm[] = "qjczieaungsdfxmphybklortvw";

  char msg[MAX_STR_LEN+1];

  /* read the message from the terminal using fgets */
  fgets(msg, MAX_STR_LEN, stdin);

  /* write your answer here */
  /*
  Name: Abhiram Ajith - 20364441
  Date: 01/12/2020
  Title:  A program that encodes a given message by substituting the letters with a permutation of 26 alphabetic characters.
  Expected output: 'Secret message' should return 'Bicyik fibbqai'
  */

  int i=0;//iterator
  int x ;// holds the value of the letter in perm[] that corresponds to each letter in msg[]

  while (msg[i]!= '\0'){//This loop iterates until the end of msg[]
    if (msg[i] >= 'a' && msg[i]<= 'z'){//This condition is for lowercase letters
    x=  msg[i] - 'a';/*This calculation gives the position of the letter in msg[i] in the alphabet (0-25)
                      e.g 's' - 'a' will return 18 which is the index of its position in any permutation array of length 26*/
    msg[i]=perm[x];//Assigns the letter in msg[i] with its corresponding letter in perm[]
    }

    else if (msg[i] >= 'A' && msg[i]<= 'Z'){//This condition is for uppercase letters
    x=  msg[i] - 'A';
    msg[i]=perm[x] + 'A'-'a';// To get the uppercase of a letter in perm[] it must be added to 'A'-'a'
    }
    i++;
  }


printf("%s", msg);
  return 0;
}
