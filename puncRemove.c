#include <stdio.h>
#define MAX_MSG_LEN 256

int main(void)
{
  char msg[MAX_MSG_LEN+1];

  fgets(msg, MAX_MSG_LEN, stdin);

  /* write your solution here ... */
  int i = 0;
while (msg[i]!= '\0'){
  if (msg[i] == '!' || msg[i] == '`' ||  msg[i] == '?' ||  msg[i] == ';' || msg[i] == ':'||  msg[i] == ',' ||  msg[i] == '.'    ){
    msg[i]= msg[i+1];
  }
  i++;
}

printf("%s", msg);
  return 0;

}
