#include<stdio.h>

int main(void)
{
  //code 
    printf("\n \n");
    printf("*******************************************************");
    printf("\n \n");

    printf("Hello Kitty!!! \n \n");

    int y = 13;
    printf("Integer Decimal Value of 'y' = %d \n", y);
    printf("Integer Octal Value of 'y' = %o \n", y);
    printf("Integer Hexdecimal Value of 'y' (Hexadecimal Letters In lower case) = %x \n", y);
    printf("Integer Hexdecimal Value of 'y' (Hexadecimal Letters In lower case) = %#x \n", y);
    printf("Integer Hexdecimal Value of 'y' (Hexadecimal Letters In UPPER CASE) = %X \n", y);
    printf("Integer Hexdecimal Value of 'y' (Hexadecimal Letters In UPPER CASE) = %#X \n \n", y);

    char churros = 'V'; 
    printf("Character churros = %c \n", churros);
    char string[] = "RTR 7.0: 2026-27 BATCH";
    printf("String of character array: %s \n\n", string);

    long number = 30121995L;
    printf("Long integrer = %ld \n\n", number);

    unsigned int bee = 7; 
    printf("Unsigned integer 'bee' = %u\n\n", bee);

    float f_num = 3012.1995f; 
    printf("Floating Point Number With Just %%f 'f_num' = %f\n", f_num);
    printf("Floating Point Number With Just %%4.2f 'f_num' = %4.2f\n", f_num);
    printf("Floating Point Number With Just %%6.5f 'f_num' = %6.5f\n", f_num);

    double d_pi = 3.1415926535893846; 
    printf("Double Precision Floating Point Number Without Exponential = %g \n", d_pi);
    printf("Double Precision Floating Point Number With Exponential (lower case)= %e \n", d_pi);
    printf("Double Precision Floating Point Number With Exponential (UPPER CASE)= %E \n", d_pi);
    printf("Double Hexadecimeal Value of 'd_pi' (Hexadecimal Letters In lower case)= %a \n", d_pi);
    printf("Double Hexadecimeal Value of 'd_pi' (Hexadecimal Letters In UPPER CASE)= %A \n", d_pi);

    printf("*******************************************************");
    printf("\n \n");
    return (0);
}
