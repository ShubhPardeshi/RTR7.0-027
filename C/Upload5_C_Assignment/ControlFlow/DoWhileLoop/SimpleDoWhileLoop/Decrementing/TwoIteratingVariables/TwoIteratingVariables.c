#include <stdio.h>

int main (void)
{
    //var declaration 
    int i, j;

    //code 
    printf("\n\n");

    printf("Printing digits 10-1 and 100-10 \n");
    i = 10; 
    j = 100; 
    do
    {
      printf("\t %d \t %d \n", i, j);
      i--;
      j-=10; 
    }while(i >= 1, j >= 10);

    printf("\n\n");

    return(0);
}