#include <stdio.h>

int main(void)
{
  //var declaration 
  int i, j;

  //code 
  printf("\n\n");

  for(i = 1; i <= 10; i++)
  {
    printf("\t i = %d \n", i);

    printf("...............\n\n");
    for(j = 1; j <= 5; j++)
    {
        printf("\t j = %d\n", j);
    }
    printf("\n\n");
  }

   return (0);
}