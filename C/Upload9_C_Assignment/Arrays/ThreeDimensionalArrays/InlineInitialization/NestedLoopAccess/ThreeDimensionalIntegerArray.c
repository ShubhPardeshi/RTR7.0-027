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
   
    iArray_NumEle = iArray_Height*iArray_Width*iArray_Depth; 
    printf("Total number of elements in 3D array is %d\n\n", iArray_NumEle);

    printf("\n\n");
    printf("Elemets in int 3D array \n");
    for(int i = 0; i < iArray_Height; i++)
    {
        printf("---------Row-%d--------\n", (i+1));
        for(int j = 0; j < iArray_Width; j++)
        {
            printf("---------Column-%d--------\n", (j+1));
            for(int k = 0; k < iArray_Depth; k++)
            {
                printf("iArray[%d][%d][%d] = %d \n", i, j, k, iArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return(0);
}