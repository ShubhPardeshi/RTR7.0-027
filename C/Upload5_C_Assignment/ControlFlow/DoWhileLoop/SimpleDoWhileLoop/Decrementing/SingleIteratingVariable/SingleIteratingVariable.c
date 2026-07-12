#include <stdio.h>

int main(void)
{
  //var declaration 
  int x;

  //code 
  printf("\n\n");

  printf("printing digits from 10 to 1:\n");
  x = 10;
  do
  {
    printf("\t %d \n", x);
    x--;
  }while(x >= 1);

   printf("\n\n");
   return (0);
}