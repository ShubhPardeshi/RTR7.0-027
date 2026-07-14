#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    //Function prototypes or declaration
    void MyAddition(void); 
    int MySubtraction(void);
    void MyMultiplication(int, int);
    int MyDivision(int, int);

    //var declaration 
    int result_substraction;
    int a_multiplication, b_multiplication;
    int a_division, b_division, result_division; 

    //code

    //ADD
    MyAddition(); 

    //SUB
    result_substraction =  MySubtraction(); 
    printf("\n\n");
    printf("substraction result = %d \n", result_substraction);

    //MUL
    printf("\n\n");
    printf("Enter integer value A for multiplication:");
    scanf("%d", &a_multiplication);

    printf("\n\n");
    printf("Enter integer value B for multiplication:");
    scanf("%d", &b_multiplication);

    MyMultiplication(a_multiplication, b_multiplication);

    //DIV
    printf("\n\n");
    printf("Enter integer value A for division:");
    scanf("%d", &a_division);

    printf("\n\n");
    printf("Enter integer value B for division:");
    scanf("%d", &b_division);

    result_division = MyDivision(a_division, b_division);
    printf("\n\n");
    printf("Division of %d and %d = %d (Quotient) \n", a_division, b_division, result_substraction);

    printf("\n\n");
    return (0);
}

void  MyAddition(void)
{
    //var declaration 
    int a; 
    int b; 
    int sum = 0; 

	//code
    printf("\n\n");
    printf("Enter integer value A for addition:");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter integer value B for addition:");
    scanf("%d", &b);

    sum = a + b; 

    printf("\n\n");
    printf("sum = %d \n", sum);
    
}

int  MySubtraction(void)
{
    //var declaration 
    int a; 
    int b; 
    int subtraction = 0; 

	//code
    printf("\n\n");
    printf("Enter integer value A for subtraction:");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter integer value B for subtracrion:");
    scanf("%d", &b);

    subtraction = a - b; 
    return(subtraction);
}

void  MyMultiplication(int a, int b)
{
    int multiplication = 0;
    
    multiplication = a * b; 

    printf("\n\n");
    printf("Multiplication of %d and %d = %d ", a, b, multiplication);
}

int  MyDivision(int a, int b)
{
    int division_q = 0;
    
    if(a > b)
        division_q = a / b; 
    else 
        division_q = b / a;

     return(division_q);
}