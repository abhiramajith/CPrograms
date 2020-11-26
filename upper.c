#include <stdio.h>

#define MAX_MSG_SIZE 256
void capitalise(char str[]);
int main(void)
{
  char msg[MAX_MSG_SIZE+1];
  /* the fgets function is used to read a string from the console */
  fgets(msg, MAX_MSG_SIZE, stdin);

  /* complete your answer here */
  int i;
 for (i=0; msg[i]!= '\0'; i++){
   if (msg[i] >= 'a' && msg[i]<= 'z'){
     msg[i]+= 'A'-'a';
   }
 }
 printf("%s", msg);
  return 0;
}
