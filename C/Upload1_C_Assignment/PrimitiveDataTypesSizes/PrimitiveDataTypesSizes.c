#include <stdio.h>

int main(void)
{
	
 //code 
	printf("\n \n");

	// warning C4477: 'printf' : format string '%ld' requires an argument of type 'long', but variadic argument 1 has type 'size_t'
	// note: consider using '%zu' in the format string
	printf("size of 'int' on 64 bit command prompt  = %zu bytes\n", sizeof(int));
	printf("size of 'unsigned int' on 64 bit command prompt  = %zu bytes\n", sizeof(unsigned int));
	printf("size of 'long' on 64 bit command prompt  = %zu bytes\n", sizeof(long));
	printf("size of 'long long' on 64 bit command prompt  = %zu bytes\n", sizeof(long long));

	printf("size of 'float' on 64 bit command prompt  = %zu bytes\n", sizeof(float));
	printf("size of 'double' on 64 bit command prompt  = %zu bytes\n", sizeof(double));
	printf("size of 'long double' on 64 bit command prompt  = %zu bytes\n", sizeof(long double));

	printf("size of 'char' on 64 bit command prompt  = %zu bytes\n", sizeof(char));
	printf("size of 'unsigned float' on 64 bit command prompt  = %zu bytes\n", sizeof(unsigned float));

//Trial
	struct userDefinedDataType {
		int i;
		double d;
		long x;
	}myObject; // padding ? 

	printf("size of 'userDefinedDataType' on 64 bit command prompt  = %zu bytes\n", sizeof(myObject)); // 24 bytes?
}