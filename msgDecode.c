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
  int x, y ;
  while (msg[i]!= '\0'){
    if (msg[i] >= 'a' && msg[i]<= 'z'){
    x=   msg[i];
      for (j=0;perm[j]!= '\0'; j++){
        if (perm[j]==msg[i]){
          y=j;
        }
      }
      msg[i]= msg[x+y];

    }

    else if (msg[i] >= 'A' && msg[i]<= 'Z'){
    x=  msg[i] - 'A';
    msg[i]=perm[x] + 'A'-'a';
    }
    i++;
  }


printf("%d\n", x);
printf("%d\n", y);
  return 0;
}