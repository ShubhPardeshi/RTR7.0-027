#include <stdio.h>

int main(void)
{
  //var declaration 
  int i, j;

  //code 
  printf("\n\n");

  for(i = 1; i <= 20; i++)
  {
    for(j = 1; j <= 20; j++)
    {
        if(j > 1)
            break; 
        else 
            printf("%d * ", i);
    }
    printf("\n");
  }

  printf("\n\n");
  return (0);
}