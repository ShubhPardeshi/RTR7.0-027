#include<stdio.h>

int main(void) 
{
   //var 
   int i,j;
   char ch_01 = 'A', ch_02 = 'A';
   
   int a, result_int;
   float f, result_float;

   int i_explicit;
   float f_explicit;

   //code 
   printf("\n \n");

   //INTERCONVERSION OF IMPILICIT TYPE-CASTING BETWEEN char AND int TYPES.....
   i = 70;  
   ch_01 = i;  //implicit type-casting from int to char
   printf("I = %d \n", i);
   printf("Character 1 (after Ch_01 = i) = %c \n\n", ch_01);

   ch_02 = 'Q';
   j = ch_02;  //implicit type-casting from char to int
   printf("Character 2 = %c \n\n", ch_02);
   printf("J (after J = ch_02) = %d \n\n", j);
   
   //IMPLICIT CONVERSION of 'int' to float.....
   a = 10;
   f = 7.8f;  
   result_float = a + f;  //implicit type-casting from int to float
   result_int = a + f;  //implicit type-casting from float to int   
  
   printf("Integer a = %d and float f = %f added gives float result = %f\n", a, f, result_float);
   printf("Integer a = %d and float f = %f added gives int result = %d\n", a, f, result_int);

   //EXPLICIT CONVERSION using cast operator.....
    f_explicit = 4.6767f;  //explicit type-casting from float to int
    i_explicit = (int)f_explicit;  //explicit type-casting from

    printf("Floating point number which will be type-casted explicitly = %f \n", f_explicit);
    printf("After explicit type-casting of %f to int, the integer value = %d \n", f_explicit, i_explicit);

    return 0;
}

