#include <stdio.h>

int main(void)
{
  //var declaration 
  int x, y;

  //code 
  printf("\n\n");

  printf("printing digits from 1 to 10 and 10 to 100:\n");
  x = 1; 
  y = 10; 
  do
  {
    printf("\t %d \t %d \n", x, y);
    x++;
    y+=10;
  }while(x <= 10, y <= 100);

   printf("\n\n");
   return (0);
}