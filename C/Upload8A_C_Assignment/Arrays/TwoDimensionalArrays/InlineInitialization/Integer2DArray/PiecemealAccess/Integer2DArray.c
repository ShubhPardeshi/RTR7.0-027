#include<stdio.h>

int main(void)
{
    int iArray[3][5] = {{1,2,5,6,8}, {1,5,6,8,0}, {9,90,787,8,8}};
    int int_size; 
    int iArray_size, iArray_NumElements, iArray_NumRows, iArray_NumCol; 
    
    printf("\n\n");
    int_size = sizeof(int);
    iArray_size = sizeof(iArray);
    printf("size of two dimentional (2D) array is: %d \n", iArray_size); 
    
    iArray_NumRows = iArray_size/sizeof(iArray[0]); 
    printf("Number of rows in 2D array is: %d \n", iArray_NumRows); 
    
    iArray_NumCol = sizeof(iArray[0])/sizeof(iArray[0][0]); 
    printf("Number of colums in 2D array is: %d \n", iArray_NumCol); 

    iArray_NumElements = iArray_NumRows*iArray_NumCol; 
    printf("Number of total elements in this 2D array is: %d \n", iArray_NumElements); 

    printf("\n\n");
    printf("Elemets in array are: \n\n");
    printf("----------Ele-1-----------\n\n");
    printf("iArray[0][0] = %d\n", iArray[0][0]);
    printf("iArray[0][1] = %d\n", iArray[0][1]);
    printf("iArray[0][2] = %d\n", iArray[0][2]);
    printf("iArray[0][3] = %d\n", iArray[0][3]);
    printf("iArray[0][4] = %d\n", iArray[0][4]);

    printf("\n\n");
    printf("----------Ele-1-----------\n\n");
    printf("iArray[1][0] = %d\n", iArray[1][0]);
    printf("iArray[1][1] = %d\n", iArray[1][1]);
    printf("iArray[1][2] = %d\n", iArray[1][2]);
    printf("iArray[1][3] = %d\n", iArray[1][3]);
    printf("iArray[1][4] = %d\n", iArray[1][4]);

    printf("\n\n");
    printf("----------Ele-1-----------\n\n");
    printf("iArray[2][0] = %d\n", iArray[2][0]);
    printf("iArray[2][1] = %d\n", iArray[2][1]);
    printf("iArray[2][2] = %d\n", iArray[2][2]);
    printf("iArray[2][3] = %d\n", iArray[2][3]);
    printf("iArray[2][4] = %d\n ", iArray[2][4]);

    printf("\n\n");
    return(0);
}
