#include <stdio.h>

int main(void)
{
	//variable declaration 
	int salary;
	int expenses; 
	int result;

	//Code
	printf("\n\n");
	printf("Enter how much monthly salary you want: ");
	scanf("%d", &salary);

	printf("\n\n");
	printf("Enter your montly expenses you have: ");
	scanf("%d", &expenses);

	printf("\n\n");

	result = salary;
    salary += expenses;
	printf("I have %d salary and %d expenses and total money flow is: %d \n", result, expenses, salary);

	result = salary;
    salary -= expenses;
	printf("I have %d salary and %d expenses and savings are: %d \n", result, expenses, salary);

	result = salary;
    salary *= expenses;
	printf("I have %d salary and %d expenses and multiplication is: %d \n",  result, expenses, salary);

	result = salary;
    salary /= expenses;
	printf("I have %d salary and %d expenses and division is: %d \n",  result, expenses, salary);

	result = salary;
    salary %= expenses;
	printf("I have %d salary and %d expenses and remainder is: %d \n",  result, expenses, salary);

	printf("\n\n");

	return(0);
}
