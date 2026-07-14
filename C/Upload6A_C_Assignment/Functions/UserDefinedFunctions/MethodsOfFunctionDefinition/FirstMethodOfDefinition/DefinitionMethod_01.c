#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    void MyAddition(void); 

    MyAddition();
    return (0);
}

void MyAddition(void)
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

    printf("\n\n");
    printf("sum = %d \n", sum);
    
}

