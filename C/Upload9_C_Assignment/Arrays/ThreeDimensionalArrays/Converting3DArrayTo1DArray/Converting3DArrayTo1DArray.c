#include<stdio.h>

#define NUM_ROWS 5 
#define NUM_COL 3
#define DEPTH 2

int main(void)
{
  int iArray_3d[NUM_ROWS][NUM_COL][DEPTH] = {{{1,2}, {3,4}, {4,5}},
                                             {{6,7}, {7,8}, {8,9}},
                                             {{0,1}, {1,2}, {2,3}},
                                             {{4,5}, {4,8}, {9.2}},
                                             {{10,6}, {60,7}, {2,1}}};

  int iArray_1d[NUM_ROWS*NUM_COL*DEPTH]; 
  
  printf("\n\n");
  printf("Display of 3D array\n");
  for(int i = 0; i < NUM_ROWS; i++)
  {
    printf("---------Row-%d--------\n", (i+1));
    for(int j = 0; j < NUM_COL; j++)
    {
        printf("---------Column-%d--------\n", (j+1));
        for(int k = 0; k < DEPTH; k++)
        {
            printf("iArray[%d][%d][%d] = %d \n", i, j, k, iArray_3d[i][j][k]);
        }
        printf("\n");
    }
    printf("\n\n");
  }

  //Conversion
  for(int i = 0; i < NUM_ROWS; i++)
  {
     for(int j = 0; j < NUM_COL; j++)
     {
        for(int k = 0; k < DEPTH; k++)
        {
            iArray_1d[(i*NUM_COL*DEPTH)+ (j*DEPTH) + k] =  iArray_3d[i][j][k]; 
        }
     }
  }

  printf("\n\n");
  printf("Converted 1D array is\n");
  for(int i = 0; i < (NUM_ROWS*NUM_COL*DEPTH); i++)
  {
    printf("iArray_1d[%d] = %d\n", i, iArray_1d[i]);
  }

  printf("\n\n");

  return(0);
}