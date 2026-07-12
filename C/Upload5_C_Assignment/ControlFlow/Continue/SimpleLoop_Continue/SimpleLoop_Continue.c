#include <stdio.h>

int main(void)
{
  //var declaration 
  int x;

  //code 
  printf("\n\n");

  printf("printing digits from 0 to 100:\n");
  for(x = 1; x <= 100; x++)
  {
    if(x % 2 != 0)
       continue; 
    else 
       printf("\t %d \n", x);
  }

   printf("\n\n");
   return (0);
}