#include <stdio.h>
#define MAX_MSG_LEN 256

int main(void)
{
  char msg[MAX_MSG_LEN+1];

  fgets(msg, MAX_MSG_LEN, stdin);

  /* write your solution here ... */
  /*
  Name: Abhiram Ajith - 20364441
  Date: 01/12/2020
  Title:  A program that removes punctuation in a given sentence.
  Expected output: 	'Too, many, punctuation marks:; by far!!' should return 'Too many punctuation marks by far'
  */
  int i = 0;//used to iterate through msg[]
  int j;//used to iterate through msg[]

while (msg[i]!= '\0'){
  if (msg[i] == '!' || msg[i] == '`' ||  msg[i] == '?' ||  msg[i] == ';' || msg[i] == ':'||  msg[i] == ',' ||  msg[i] == '.'    ){//there are 7 different punctuation symbols
    for (j=i; msg[j]!= '\0';j++){//loops from msg[i] to the end of msg[]
        msg[j]= msg[j+1];//assigns msg[j] to msg[j+1] overwriting the punctuation marke and shifting evrything to the left once
    }
    i--;// decrements i if there is a punctuation in msg[i] in case there is more than one punctuation in a row
  }
  i++;
}

printf("%s", msg);
  return 0;

}
