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
  int i=0;
  int j;
  int x;
  while (msg[i]!= '\0'){
    if (msg[i] >= 'a' && msg[i]<= 'z'){
      for (j=0;perm[j]!= '\0'; j++){
        if (perm[j]==msg[i]){
          x=j;
        }
      }
      msg[i]= 'a'+ x;

    }

    else if (msg[i] >= 'A' && msg[i]<= 'Z'){
      msg[i]+= 'a'-'A';
      for (j=0;perm[j]!= '\0'; j++){
        if (perm[j]==msg[i]){
          x=j;
        }
      }
  msg[i]= 'A'+ x;
    }
    i++;
  }


printf("%s\n", msg);
  return 0;
}
