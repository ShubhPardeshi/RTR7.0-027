#include<stdio.h>

int main(void)
{
    int iArray[5][3][2] = {{{1,2}, {3,4}, {4,5}},
                           {{6,7}, {7,8}, {8,9}},
                           {{0,1}, {1,2}, {2,3}},
                           {{4,5}, {4,8}, {9.2}},
                           {{10,6}, {60,7}, {2,1}}};

    int int_size; 
    int iArray_size, iArray_Height, iArray_Width, iArray_Depth, iArray_NumEle;
    
    int_size = sizeof(int);

    iArray_size = sizeof(iArray); 
    printf("Size of entire 3D array is %d\n\n", iArray_size);

    iArray_Height = iArray_size/sizeof(iArray[0]); 
    printf("Number of rows(height) in 3D array is %d\n\n", iArray_Height);

    iArray_Width = sizeof(iArray[0])/sizeof(iArray[0][0]); 
    printf("Number of columns(width) in 3D array is %d\n\n", iArray_Width);

    iArray_Depth = sizeof(iArray[0][0])/sizeof(iArray[0][0][0]); 
    printf("Depth in 3D array is %d\n\n", iArray_Depth);

    iArray_Depth = sizeof(iArray[0][0])/sizeof(iArray[0][0][0]); 
   
    iArray_NumEle = iArray_Height*iArray_Width*iArray_Depth; 
    printf("Total number of elements in 3D array is %d\n\n", iArray_NumEle);

    printf("\n\n");
    printf("***************************\n"); 
    printf("Row-1\n"); 
    printf("Column-1\n"); 
    printf("iArray[0][0][0] = %d \n", iArray[0][0][0]);
    printf("iArray[0][0]][1] = %d \n", iArray[0][0][1]);

    printf("Column-2\n"); 
    printf("iArray[0][1][0] = %d \n", iArray[0][1][0]);
    printf("iArray[0][1]][1] = %d \n", iArray[0][1][1]);

    printf("Column-3\n"); 
    printf("iArray[0][2][0] = %d \n", iArray[0][2][0]);
    printf("iArray[0][2]][1] = %d \n", iArray[0][2][1]);

    printf("\n\n");
    printf("***************************\n"); 
    printf("Row-2\n"); 
    printf("Column-1\n"); 
    printf("iArray[1][0][0] = %d \n", iArray[1][0][0]);
    printf("iArray[1][0]][1] = %d \n", iArray[1][0][1]);

    printf("Column-2\n"); 
    printf("iArray[1][1][0] = %d \n", iArray[1][1][0]);
    printf("iArray[1][1]][1] = %d \n", iArray[1][1][1]);

    printf("Column-3\n"); 
    printf("iArray[1][2][0] = %d \n", iArray[1][2][0]);
    printf("iArray[1][2]][1] = %d \n", iArray[1][2][1]);

    printf("\n\n");
    printf("***************************\n"); 
    printf("Row-3\n"); 
    printf("Column-1\n"); 
    printf("iArray[2][0][0] = %d \n", iArray[2][0][0]);
    printf("iArray[2][0]][1] = %d \n", iArray[2][0][1]);

    printf("Column-2\n"); 
    printf("iArray[2][1][0] = %d \n", iArray[2][1][0]);
    printf("iArray[2][1]][1] = %d \n", iArray[2][1][1]);

    printf("Column-3\n"); 
    printf("iArray[2][2][0] = %d \n", iArray[2][2][0]);
    printf("iArray[2][2]][1] = %d \n", iArray[2][2][1]);

    printf("\n\n");
    printf("***************************\n"); 
    printf("Row-4\n"); 
    printf("Column-1\n"); 
    printf("iArray[3][0][0] = %d \n", iArray[3][0][0]);
    printf("iArray[3][0]][1] = %d \n", iArray[3][0][1]);

    printf("Column-2\n"); 
    printf("iArray[3][1][0] = %d \n", iArray[3][1][0]);
    printf("iArray[3][1]][1] = %d \n", iArray[3][1][1]);

    printf("Column-3\n"); 
    printf("iArray[3][2][0] = %d \n", iArray[3][2][0]);
    printf("iArray[3][2]][1] = %d \n", iArray[3][2][1]);

    printf("\n\n");
    printf("***************************\n"); 
    printf("Row-5\n"); 
    printf("Column-1\n"); 
    printf("iArray[4][0][0] = %d \n", iArray[4][0][0]);
    printf("iArray[4][0]][1] = %d \n", iArray[4][0][1]);

    printf("Column-2\n"); 
    printf("iArray[4][1][0] = %d \n", iArray[4][1][0]);
    printf("iArray[4][1]][1] = %d \n", iArray[4][1][1]);

    printf("Column-3\n"); 
    printf("iArray[4][2][0] = %d \n", iArray[4][2][0]);
    printf("iArray[4][2]][1] = %d \n", iArray[4][2][1]);

    return(0);
}