#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    //var declaration 
    int i; 

	//code
    printf("\n\n");
	printf("Hello Kitty!!!! \n");
    printf("Number of command line arguments = %d\n", argc);

    printf("\n\n");
    printf("Command line arguments passed to this program are: \n\n");
    for(i = 0; i < argc; i++)
    {
        printf("Command line argument number %d = %s\n", (i+1), argv[i]);
    }

    printf("\n\n");
    printf("First 20 enviroment varible passed to this programm are: \n\n");
    for(i = 0; i < 20; i++)
    {
        printf("enviroments variable number %d = %s\n", (i+1), envp[i]);
    }

    printf("\n\n");
    return (0);
}
