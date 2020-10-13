#include <stdio.h>

int main(void)
{
  int day, i;

  for(day = 1; day <= 12; day = day + 1)
    {
      if(day == 1) printf("On the first day of Christmas, ");
      else if(day == 2)
        printf("On the second day of Christmas, ");
      else if(day == 3)
        printf("On the third day of Christmas, ");
      else if(day == 4)
        printf("On the fourth day of Christmas, ");
      else if(day == 5)
        printf("On the fifth day of Christmas, ");
      else if(day == 6)
        printf("On the sixth day of Christmas, ");
      else if(day == 7)
        printf("On the seventh day of Christmas, ");
      else if(day == 8)
        printf("On the eighth day of Christmas, ");
      else if(day == 9)
        printf("On the nineth day of Christmas, ");
      else if(day == 10)
        printf("On the tenth day of Christmas, ");
      else if(day == 11)
        printf("On the eleventh day of Christmas, ");
      else if(day == 12)
        printf("On the twelveth day of Christmas, ");
      printf("my true love gave to me\n");
      for(i = day; i > 0; i = i - 1)
        {
          if(i == 1)
            {
              if(day == 1) printf("A ");
              else         printf("And a ");
              printf("partridge in a pear tree.\n");
            }
          else if(i == 2)
            printf("Two turtledoves,\n");
          else if(i == 3)
            printf("Three French hens,\n");
          else if(i == 4)
            printf("Four calling birds,\n");
          else if(i == 5)
            printf("Five gold rings,\n");
          else if(i == 6)
            printf("Six geese a laying,\n");
          else if(i == 7)
            printf("Seven swans a-swimming,\n");
          else if(i == 8)
            printf("Eight maids a-milking,\n");
          else if(i == 9)
            printf("Nine ladies dancing,\n");
          else if(i == 10)
            printf("Ten lords a-leaping,\n");
          else if(i == 11)
            printf("Eleven pipers piping,\n");
          else if(i == 12)
            printf("Twelve drummers drumming,\n");
    }
    printf("\n");
  }

  return 0;
}
