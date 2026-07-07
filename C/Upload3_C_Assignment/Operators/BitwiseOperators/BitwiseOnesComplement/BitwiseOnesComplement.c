#include<stdio.h>

void printBinaryFormOfNumber(unsigned int decimal_number)
{
	//var 
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code 
	for (i = 0; i < 8; i++)
		binary_array[i] = 0;

	printf("Binary form of the decimal integer %d is \t = \t", decimal_number);
	num = decimal_number;
	i = 7;

	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}

	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n \n");
}

int main(void) 
{
   //var 
   unsigned int a;
   unsigned int result;

   //code 
   printf("\n \n");
   printf("Enter an integer: ");
   scanf("%u", &a);

   printf("\n\n\n\n");
   result = ~a;
   printf("Bitwise Ones Complement of \nA = %d Decimal gives result %d decimal. \n \n", a, result);

   printBinaryFormOfNumber(a);
   printBinaryFormOfNumber(result);
}

