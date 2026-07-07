#include <stdio.h>

int main(void)
{
  //variable declaration
	int i = 10;
	float f = 9.5f;
	double d = 3.145; 
	char c = 'S';

  //code
	printf("\n \n");

	printf("integer value of i is: %d \n", i);
	printf("float value of f is: %f \n", f);
	printf("double value of d is: %lf \n", d); 
	printf("character value of c is: %c \n", c); 

	printf("\n \n");

  //reinitialize 
	i = 50000;
	f = 0.673f;
    d = 6.6782636432;
	c = 'z';

	printf("integer value of i is: %d \n", i);
	printf("float value of f is: %f \n", f); //Trailing zeros - 0.673000
	printf("double value of d is: %lf \n", d); //value truncated to 6.678264 
	printf("character value of c is: %c \n", c);

	printf("\n \n");

	return (0);
}