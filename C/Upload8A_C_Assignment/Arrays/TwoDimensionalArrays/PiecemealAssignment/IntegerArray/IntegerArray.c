#include<stdio.h>

int main(void)
{
    int iArray[3][5];
    int iArray_size, iArray_NumEle, iArray_Rows, iArray_Col; 

    int int_size = sizeof(int);

    iArray_size = sizeof(iArray);
    printf("size of two dimentional (2D) integer array is: %d \n", iArray_size); 

    iArray_Rows = iArray_size/sizeof(iArray[0]);
    printf("Number of rows in 2D integer array is: %d \n", iArray_Rows); 

    iArray_Col = sizeof(iArray[0])/sizeof(iArray[0][0]);
    printf("Number of colums in 2D integer array is: %d \n", iArray_Col); 

    iArray_NumEle = iArray_Rows*iArray_Col; 
    printf("Number of total elements in this 2D int array is: %d \n", iArray_NumEle); 

    //initialize 
    iArray[0][0] = 78; 
    iArray[0][1] = 7; 
    iArray[0][2] = 2; 
    iArray[0][3] = 98; 
    iArray[0][4] = 54; 

    iArray[1][0] = 787; 
    iArray[1][1] = 13; 
    iArray[1][2] = 98; 
    iArray[1][3] = 232; 
    iArray[1][4] = 87433; 

    iArray[1][0] = 0; 
    iArray[1][1] = 12; 
    iArray[1][2] = 43; 
    iArray[1][3] = 65; 
    iArray[1][4] = 343; 

    //Display 
    printf("\n\n");
    for(int i = 0; i < iArray_Rows; i++)
    {
        printf("---------Row-%d--------\n", (i+1));
        for(int j = 0; j < iArray_Col; j++)
        {
            printf("iArray[%d][%d] = %d \n", i, j, iArray[i][j]);
        }
        printf("\n\n");
    }

    return(0);
}