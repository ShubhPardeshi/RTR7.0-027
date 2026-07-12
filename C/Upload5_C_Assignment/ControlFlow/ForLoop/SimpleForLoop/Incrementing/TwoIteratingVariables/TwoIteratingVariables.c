#include <stdio.h>

int main(void)
{
  //var declaration 
  int x, y;

  //code 
  printf("\n\n");

  printf("printing digits from 1 to 10 and 10 to 100:\n");
  for(x = 1, y = 10; x <= 10, y <= 100; x++, y = y + 10)
  {
    printf("\t %d \t %d \n", x, y);
  }

   printf("\n\n");
   return (0);
}