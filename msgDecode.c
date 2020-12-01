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
  Title:  A program that decodes a message that has been encoded using a permutation array of the alphabet.
  Expected output: 'Bicyik fibbqai' should 'Secret message'
  */

  int i=0;//used to iterate through msg[]
  int j;//used to iterate through perm[]
  int x;//holds the index of the respective letter in perm[]

  while (msg[i]!= '\0'){//loops for the length of msg[]
    if (msg[i] >= 'a' && msg[i]<= 'z'){//Condition for lowercase
      for (j=0;perm[j]!= '\0'; j++){//loops through perm[] until msg[i]=perm[j], this gives the index of the letter in msg[i] in perm[]
        if (perm[j]==msg[i]){
          x=j;
        }
      }
      msg[i]= 'a'+ x;//adds x to 'a' which will give the corresponding letter in the alphabet in lowercase and assign it to msg[i]    

    }

    else if (msg[i] >= 'A' && msg[i]<= 'Z'){//Condition for uppercase
      msg[i]+= 'a'-'A';//converts msg[i] to lowercase so it can be found in perm[]
      for (j=0;perm[j]!= '\0'; j++){
        if (perm[j]==msg[i]){
          x=j;
        }
      }
  msg[i]= 'A'+ x;//adds x to 'A' which will give the corresponding letter in the alphabet in uppercase and assign it to msg[i]
    }
    i++;
  }


printf("%s\n", msg);
  return 0;
}
