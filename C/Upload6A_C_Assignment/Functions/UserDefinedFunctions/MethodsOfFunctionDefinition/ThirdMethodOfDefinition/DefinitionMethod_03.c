#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    void MyAddition(int, int); 
    //var declaration 
    int a,b;

    //code
    printf("\n\n");
    printf("Enter integer value for A:");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter integer value for B:");
    scanf("%d", &b);

    MyAddition(a, b);

    return (0);
}

void  MyAddition(int a, int b)
{
    //var declaration  
    int sum = 0; 

    //code 
    sum = a + b; 

    printf("\n\n");
    printf("addition of %d and %d = %d \n", a, b, sum);
    
}

