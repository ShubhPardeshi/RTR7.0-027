#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
    //var declaration 
    int i; 
    int num; 
    int sum = 0; 

	//code
    if(argc == 1)
    {
        printf("\n\n");
        printf("No number given for addition !!! Exiting now ....\n\n");
        printf("Usage : CommandLineArgumentsApplication <first number> <second number>.... \n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Sum of all integer command line arguments is: \n\n");
    for(i = 0; i < argc; i++)
    {
        num = atoi(argv[i]);
        sum = sum + num; 
    }

    printf("sum = %d \n", sum);
    return (0);
}
