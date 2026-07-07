#include <stdio.h>

int main (void)
{
    //variable inline initialization 
    int ex = 5; 
    int bx = 10; 
    int result; 

    //code 
    printf("\n\n");
    printf("ex = %d\n", ex);
    printf("post increamented ex = %d\n", ex++);
    printf("ex = %d\n", ex);
    printf("pre increamented ex = %d\n\n", ++ex);
    
    printf("bx = %d\n", bx);
    printf("post decreament bx = %d\n", bx--);
    printf("bx = %d\n", bx);
    printf("pre decreament bx = %d\n", --bx);

    return (0);
}