#include<stdio.h>

int main(void)
{
    int iArray_1d[5]; 
    int iArray_2d[5][3];
    int iArray_3d[100][100][5];

    int num_row_2d, num_col_2d; 
    int num_row_3d, num_col_3d, depth_3d; 

    printf("\n\n");
    printf("Size of 1-D array = %zu \n", sizeof(iArray_1d));
    printf("Number of elemets in 1D array: %llu \n", (sizeof(iArray_1d)/sizeof(int)));

    printf("\n\n");
    printf("Size of 2-D array = %zu \n", sizeof(iArray_2d));
    
    printf("Number of rows in 2D integer array is: %llu \n", (sizeof(iArray_2d)/sizeof(iArray_2d[0]))); 
    num_row_2d = sizeof(iArray_2d)/sizeof(iArray_2d[0]);

    printf("Number of colums in 2D integer array is: %llu \n", (sizeof(iArray_2d[0])/sizeof(iArray_2d[0][0]))); 
    num_col_2d = sizeof(iArray_2d[0])/sizeof(iArray_2d[0][0]);

    printf("Number of total elements in this 2D int array is: %d \n", (num_row_2d*num_col_2d)); 

    printf("\n\n");
    printf("Size of 3D array = %zu\n\n", sizeof(iArray_3d));

    printf("Number of rows(height) in 3D array is %llu\n\n", (sizeof(iArray_3d)/sizeof(iArray_3d[0])));
    num_row_3d = sizeof(iArray_3d)/sizeof(iArray_3d[0]); 

    printf("Number of columns(width) in 3D array is %llu\n\n", (sizeof(iArray_3d[0])/sizeof(iArray_3d[0][0])));
    num_col_3d = sizeof(iArray_3d[0])/sizeof(iArray_3d[0][0]); 

    printf("Depth in 3D array is %llu\n\n", (sizeof(iArray_3d[0][0])/sizeof(iArray_3d[0][0][0])));
    depth_3d = sizeof(iArray_3d[0][0])/sizeof(iArray_3d[0][0][0]); 

    printf("Total number of elements in 3D array is %d\n\n", num_row_3d*num_col_3d*depth_3d);

    printf("\n\n");
    return(0); 

}