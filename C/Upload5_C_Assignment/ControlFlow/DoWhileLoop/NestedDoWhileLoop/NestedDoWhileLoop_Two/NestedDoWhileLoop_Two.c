#include <stdio.h>

int main(void)
{
  //var declaration 
  int i, j, k;

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

         printf("...............\n\n");
         k = 1;
         do
         {
             printf("\t k = %d\n", k);
             k++;
         }while(k <= 3);

         j++;
         printf("\n\n");
    }while(j <= 5);

    i++;
    printf("\n\n");
  }while(i <= 10);

   return (0);
}