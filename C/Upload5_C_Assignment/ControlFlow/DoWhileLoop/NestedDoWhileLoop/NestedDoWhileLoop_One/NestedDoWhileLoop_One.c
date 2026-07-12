#include <stdio.h>

int main(void)
{
  //var declaration 
  int i, j;

  //code 
  printf("\n\n");

  i = 1;
  do
  {
    printf("\t i = %d \n", i);

    printf("...............\n\n");
    j = 1;
    do
    {
        printf("\t j = %d\n", j);
        j++;
    }while(j <= 5);
    i++;

    printf("\n\n");
  }while(i <= 10);

   return (0);
}