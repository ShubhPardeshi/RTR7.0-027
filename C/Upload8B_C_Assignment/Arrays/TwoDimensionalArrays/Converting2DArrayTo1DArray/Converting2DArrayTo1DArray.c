#include<stdio.h>

#define NUM_ROWS 5 
#define NUM_COL 3

int main(void)
{
  int iArray_2d[NUM_ROWS][NUM_COL];
  int iArray_1d[NUM_ROWS*NUM_COL]; 
  int num = 0; 
  
  printf("Fill up the 2D array");
  for(int i = 0; i < NUM_ROWS; i++)
  {
    printf("For row number - %d\n", (i+1));
    for(int j = 0; j < NUM_COL; j++)
    {
        printf("Enter element number %d\n", (j+1));
        scanf("%d", &num);
        iArray_2d[i][j] = num; 
    }
    printf("\n\n");
  }

  printf("\n\n");
  printf("Display of 2D array\n");
  for(int i = 0; i < NUM_ROWS; i++)
  {
    printf("---------Row-%d--------\n", (i+1));
    for(int j = 0; j < NUM_COL; j++)
    {
        printf("iArray[%d][%d] = %d \n", i, j,  iArray_2d[i][j]);
    }
    printf("\n\n");
  }

  //Conversion
  for(int i = 0; i < NUM_ROWS; i++)
  {
     for(int j = 0; j < NUM_COL; j++)
     {
        iArray_1d[(i*NUM_COL)+j] =  iArray_2d[i][j]; 
     }
  }

  printf("\n\n");
  printf("Converted 1D array is\n");
  for(int i = 0; i < (NUM_ROWS*NUM_COL); i++)
  {
    printf("iArray_1d[%d] = %d\n", i, iArray_1d[i]);
  }

  printf("\n\n");

  return(0);
}