#include <stdio.h>

int main (void)
{
    //var declaration 
    int i, j;

    //code 
    printf("\n\n");

    printf("Printing digits 10-1 and 100-10 \n");
    for(i = 10, j = 100; i >= 1, j >= 10; i--, j -= 10)
    {
      printf("\t %d \t %d \n", i, j);
    }

    printf("\n\n");

    return(0);
}