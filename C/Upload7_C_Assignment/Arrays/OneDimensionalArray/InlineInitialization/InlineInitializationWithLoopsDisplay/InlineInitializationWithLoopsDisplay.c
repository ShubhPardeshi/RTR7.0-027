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

    int i; 

    printf("\n\n");
    printf("In-line initialization and loop display of elements of Array 'iArray[]': \n\n");

    int_size = sizeof(int);
    iArray_size = sizeof(iArray);
    iArray_num_elements = sizeof(iArray)/sizeof(int); 

    for(i = 0; i < iArray_num_elements; i++)
    {
        printf("iArray[%d] (%d element) = %d \n", i, (i+1), iArray[i]);
    }
    
    printf("Size of data type 'int' = %d bytes \n", int_size);
    printf("Number of elements in 'int' Array 'iArray[]' = %d elements \n", iArray_num_elements);
    printf("Size of Array 'iArray[]' (%d elements * %d bytes) = %d bytes \n\n", iArray_num_elements, int_size, iArray_size); 
    
    printf("\n\n");

    printf("In-line initialization and Piece-meal display of elements of Array 'cArray[]': \n\n");

    char_size = sizeof(char);
    cArray_size = sizeof(cArray);
    cArray_num_elements = sizeof(cArray)/sizeof(char); 

    for(i = 0; i < cArray_num_elements; i++)
    {
        printf("cArray[%d] (%d element) = %c \n", i, (i+1), cArray[i]);
    }

    printf("Size of data type 'char' = %d bytes \n", char_size);
    printf("Number of elements in 'int' Array 'cArray[]' = %d elements \n", cArray_num_elements);
    printf("Size of Array 'cArray[]' (%d elements * %d bytes) = %d bytes \n\n", cArray_num_elements, char_size, cArray_size); 

    printf("\n\n");

    printf("In-line initialization and Piece-meal display of elements of Array 'fArray[]': \n\n");

    float_size = sizeof(float);
    fArray_size = sizeof(fArray);
    fArray_num_elements = sizeof(fArray)/sizeof(float); 
   

    for(i = 0; i < fArray_num_elements; i++)
    {
        printf("fArray[%d] (%d element) = %f \n", i, (i+1), fArray[i]);
    }

    printf("Size of data type 'float' = %d bytes \n", float_size);
    printf("Number of elements in 'int' Array 'fArray[]' = %d elements \n", fArray_num_elements);
    printf("Size of Array 'fArray[]' (%d elements * %d bytes) = %d bytes \n\n", fArray_num_elements, float_size, fArray_size); 

    return(0);
}   