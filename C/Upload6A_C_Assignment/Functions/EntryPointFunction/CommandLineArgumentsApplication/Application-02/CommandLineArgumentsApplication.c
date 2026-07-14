#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
    //var declaration 
    int i; 

	//code
    if(argc != 4)
    {
        printf("\n\n");
        printf("Invalid usage !!! Exiting now ....\n\n");
        printf("Usage : CommandLineArgumentsApplication <First name> <Middle name> <Surname>.... \n\n");
        exit(0);
    }

    printf("\n\n");
    printf("Full name is:");
    for(i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n\n");
    return (0);
}
