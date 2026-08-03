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
    for(int i = 0; i < iArray_NumRows; i++)
    {
        printf("----------Ele-%d-----------\n\n", i);
        for(int j = 0; j < iArray_NumCol; j++)
        {
             printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }
    }

    printf("\n\n");
    return(0);
}
