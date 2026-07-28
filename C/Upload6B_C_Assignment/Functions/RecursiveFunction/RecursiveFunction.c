#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    unsigned int num; 

    void recursive(unsigned int);

    printf("\n\n"); 
    printf("Enter any number: \n\n");
    scanf("%u", &num); 
    
    printf("\n\n"); 
    printf("Output of recursive function is: \n\n");

    recursive(num); 

    printf("\n\n"); 
    return(0);
}

void recursive(unsigned int n)
{
    printf("n = %d \n", n); 

    if(n > 0)
        recursive(n-1); 
}