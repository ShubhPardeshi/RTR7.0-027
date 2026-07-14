#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(int, int); 
    //var declaration 
    int a,b, result;

    //code
    printf("\n\n");
    printf("Enter integer value for A:");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter integer value for B:");
    scanf("%d", &b);

    result = MyAddition(a, b);

    printf("\n\n");
    printf("addition of %d and %d = %d \n", a, b, result);
    return (0);
}

int  MyAddition(int a, int b)
{
    //var declaration  
    int sum = 0; 

    //code 
    sum = a + b; 

    return(sum);
    
}

