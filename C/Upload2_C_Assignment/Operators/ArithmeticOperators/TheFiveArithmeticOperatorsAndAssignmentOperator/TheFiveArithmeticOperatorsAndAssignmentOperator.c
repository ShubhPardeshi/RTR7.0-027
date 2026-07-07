#include <stdio.h>

int main(void)
{
	//variable declaration 
	int apple;
	int banana; 
	int result;

	//Code
	printf("\n\n");
	printf("Enter how many apples you want: ");
	scanf("%d", &apple);

	printf("\n\n");
	printf("Enter how many banana you want: ");
	scanf("%d", &banana);

	printf("\n\n");

	result = apple + banana;
	printf("I have %d apples and %d bananas and total fruits I have are: %d \n", apple, banana, result);

	result = apple - banana;
	printf("I have %d apples and %d bananas and difference is: %d \n", apple, banana, result);

	result = apple * banana;
	printf("I have %d apples and %d bananas and multiplication is: %d \n", apple, banana, result);

	result = apple / banana;
	printf("I have %d apples and %d bananas and devision is: %d \n", apple, banana, result);

	result = apple % banana;
	printf("I have %d apples and %d bananas and remainder is: %d \n", apple, banana, result);

	printf("\n\n");

	return(0);
}
