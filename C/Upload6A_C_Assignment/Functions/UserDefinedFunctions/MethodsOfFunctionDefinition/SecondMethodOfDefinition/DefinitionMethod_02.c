#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(void); 

    int result; 
    result = MyAddition();

    printf("\n\n");
    printf("result = %d \n", result);

    return (0);
}

int MyAddition(void)
{
    //var declaration 
    int a; 
    int b; 
    int sum = 0; 

	//code
    printf("\n\n");
    printf("Enter integer value for A:");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter integer value for B:");
    scanf("%d", &b);

    sum = a + b; 

   return (sum);
    
}

