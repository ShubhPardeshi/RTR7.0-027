#include <stdio.h>

int main(void)
{
  //var declaration 
  int i, j;

  //code 
  printf("\n\n");
  printf("Outerloop prints odd numbers from 1 - 10\n");
  printf("Innerloop prints even numbers from 1 - 10 for every odd number printed by outer loop\n");

  for(i = 1; i <= 10; i++)
  {
    if(i % 2 != 0)
    {
        printf("\t i = %d \n", i);
        printf("...............\n\n");
        
        for(j = 1; j <= 10; j++)
        {
            if(j % 2 == 0)  //even
                printf("\t j = %d\n", j);
            else 
                continue;
        }
        printf("\n\n");
    }
    else 
        continue;
  }

  printf("\n\n");
  return (0);
}