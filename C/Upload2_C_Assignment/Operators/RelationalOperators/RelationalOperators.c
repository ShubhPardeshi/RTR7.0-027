#include <stdio.h>

int main (void)
{
    //variable inline initialization 
    int salary; 
    int expenses; 
    int result; 

    //code 
    printf("\n\n");
	printf("Enter how much monthly salary you want: ");
	scanf("%d", &salary);

	printf("\n\n");
	printf("Enter your montly expenses you have: ");
	scanf("%d", &expenses);

    printf("\n\n");
    printf("If answer is zero(0), it is 'FALSE'\n");
    printf("If answer is one(1), it is 'TRUE'\n");

    result = (salary < expenses);
    printf("(salary < expenses) salary = %d is less than expenses = %d      \t Answer = %d\n", salary, expenses, result);
    
    result = (salary > expenses);
    printf("(salary > expenses) salary = %d is greater than expenses = %d      \t Answer = %d\n", salary, expenses, result);

    result = (salary >= expenses);
    printf("(salary >= expenses) salary = %d is greater than or equal to expenses = %d      \t Answer = %d\n", salary, expenses, result);

    result = (salary <= expenses);
    printf("(salary <= expenses) salary = %d is less than or equal to expenses = %d      \t Answer = %d\n", salary, expenses, result);

    result = (salary == expenses);
    printf("(salary == expenses) salary = %d is equal to expenses = %d      \t Answer = %d\n", salary, expenses, result);

    result = (salary != expenses);
    printf("(salary != expenses) salary = %d is Not equal to expenses = %d      \t Answer = %d\n", salary, expenses, result);

    return (0);
}