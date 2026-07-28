#include <stdio.h>

int main(void)
{
    int iArray[] = {9, 30, 6, 12, 98, 95, 20, 23, 2, 45};
    int int_size;
    int iArray_size; 
    int iArray_num_elements; 

    float fArray[] = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f}; 
    int float_size;
    int fArray_size; 
    int fArray_num_elements; 

    char cArray[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P'};
    int char_size; 
    int cArray_size; 
    int cArray_num_elements; 

    printf("\n\n");
    printf("In-line initialization and Piece-meal display of elements of Array 'iArray[]': \n\n");

    printf("iArray[0] (1st element) = %d \n", iArray[0]);
    printf("iArray[1] (2st element) = %d \n", iArray[1]);
    printf("iArray[2] (3st element) = %d \n", iArray[2]);
    printf("iArray[3] (4st element) = %d \n", iArray[3]);
    printf("iArray[4] (5st element) = %d \n", iArray[4]);
    printf("iArray[5] (6st element) = %d \n", iArray[5]);
    printf("iArray[6] (7st element) = %d \n", iArray[6]);
    printf("iArray[7] (8st element) = %d \n", iArray[7]);
    printf("iArray[8] (9st element) = %d \n", iArray[8]);
    printf("iArray[9] (10st element) = %d \n", iArray[9]);

    int_size = sizeof(int);
    iArray_size = sizeof(iArray);
    iArray_num_elements = sizeof(iArray)/sizeof(int); 
    printf("Size of data type 'int' = %d bytes \n", int_size);
    printf("Number of elements in 'int' Array 'iArray[]' = %d elements \n", iArray_num_elements);
    printf("Size of Array 'iArray[]' (%d elements * %d bytes) = %d bytes \n\n", iArray_num_elements, int_size, iArray_size); 
    
    printf("\n\n");

    printf("In-line initialization and Piece-meal display of elements of Array 'cArray[]': \n\n");

    printf("cArray[0] (1st element) = %c \n", cArray[0]);
    printf("cArray[1] (2st element) = %c \n", cArray[1]);
    printf("cArray[2] (3st element) = %c \n", cArray[2]);
    printf("cArray[3] (4st element) = %c \n", cArray[3]);
    printf("cArray[4] (5st element) = %c \n", cArray[4]);
    printf("cArray[5] (6st element) = %c \n", cArray[5]);
    printf("cArray[6] (7st element) = %c \n", cArray[6]);
    printf("cArray[7] (8st element) = %c \n", cArray[7]);
    printf("cArray[8] (9st element) = %c \n", cArray[8]);
    printf("cArray[9] (10st element) = %c \n", cArray[9]);

    char_size = sizeof(char);
    cArray_size = sizeof(cArray);
    cArray_num_elements = sizeof(cArray)/sizeof(char); 
    printf("Size of data type 'char' = %d bytes \n", char_size);
    printf("Number of elements in 'int' Array 'cArray[]' = %d elements \n", cArray_num_elements);
    printf("Size of Array 'cArray[]' (%d elements * %d bytes) = %d bytes \n\n", cArray_num_elements, char_size, cArray_size); 

    printf("\n\n");

    printf("In-line initialization and Piece-meal display of elements of Array 'fArray[]': \n\n");

    printf("fArray[0] (1st element) = %f \n", fArray[0]);
    printf("fArray[1] (2st element) = %f \n", fArray[1]);
    printf("fArray[2] (3st element) = %f \n", fArray[2]);
    printf("fArray[3] (4st element) = %f \n", fArray[3]);
    printf("fArray[4] (5st element) = %f \n", fArray[4]);
    printf("fArray[5] (6st element) = %f \n", fArray[5]);
    printf("fArray[6] (7st element) = %f \n", fArray[6]);
    printf("fArray[7] (8st element) = %f \n", fArray[7]);
    printf("fArray[8] (9st element) = %f \n", fArray[8]);
    printf("fArray[9] (10st element) = %f \n", fArray[9]);

    float_size = sizeof(float);
    fArray_size = sizeof(fArray);
    fArray_num_elements = sizeof(fArray)/sizeof(float); 
    printf("Size of data type 'float' = %d bytes \n", float_size);
    printf("Number of elements in 'int' Array 'fArray[]' = %d elements \n", fArray_num_elements);
    printf("Size of Array 'fArray[]' (%d elements * %d bytes) = %d bytes \n\n", fArray_num_elements, float_size, fArray_size); 

    return(0);
}   