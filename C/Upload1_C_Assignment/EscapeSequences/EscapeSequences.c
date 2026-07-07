#include<stdio.h>

int main(void)
{
	//code 
	printf("\n \n");
	printf("Going to the nect line.... using \\n Escape Sequences \n\n");
	printf("Doing \t horizontal \t tab \t using \t \\t Escape Sequences*** \n\n");
	printf(" \"This is a double quoated output\" done using \\\" \\\" Escape Sequences \n\n");
	printf(" \'This is a single quoated output\' done using \\\' \\\' Escape Sequences \n\n");
	printf("BACKSPACE turned to BACKSPACE\b using Escape Sequences \\b \n\n");

	printf("\r demonstrating carriage return using \\r Escape Sequences \n");
	printf("demonstrating \r carriage return using \\r Escape Sequences \n");
	printf("demonstrating carriage \r return using \\r Escape Sequences \n\n");

	printf("demonstrating \x41 using \\xhh Escape Sequences \n\n"); //0x41 hexa code for letter A - x-hh (hh are for 2 digits)
	printf("demonstrating \102 using \\ooo Escape Sequences \n\n"); //102 octal code for letter B - 000 (placeholder for 3 digits in octal)

	return(0);
}