#include <stdio.h>

int main(void)
{
  //var declaration 
  int x;

  //code 
  printf("\n\n");

  printf("printing digits from 1 to 10:\n");
  x = 1; 
  do
  {
     printf("\t %d \n", x);
     x++; 
  }while(x <= 10);

  printf("\n\n");
  return (0);
}