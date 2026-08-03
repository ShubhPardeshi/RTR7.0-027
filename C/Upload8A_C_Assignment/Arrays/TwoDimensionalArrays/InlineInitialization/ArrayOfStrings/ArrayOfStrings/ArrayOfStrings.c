#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    int myStrlen(char[]);

    char sArray[5][10] = {{"Hi"},{"Hej"},{"hey"},{"Lucky"},{"cAT"}}; 
    int char_size;
    int strArraySize, strArray_NumRows, strArray_NumCol, strArray_NumEle = 0; 
    int strArray_ActualNumChar = 0; 

    printf("\n\n");
    char_size = sizeof(char);
    strArraySize = sizeof(sArray);
    printf("size of two dimentional (2D) character array is: %d \n", strArraySize); 
    
    strArray_NumRows = strArraySize/sizeof(sArray[0]); 
    printf("Number of rows in 2D char array is: %d \n", strArray_NumRows); 
    
    strArray_NumCol = sizeof(sArray[0])/sizeof(sArray[0][0]); 
    printf("Number of colums in 2D char array is: %d \n", strArray_NumCol); 

    strArray_NumEle = strArray_NumRows*strArray_NumCol; 
    printf("Maximun number of elemets in this 2D char array can be: %d \n", strArray_NumEle); 

    for(int i = 0; i < strArray_NumRows; i++)
    {
        strArray_ActualNumChar = strArray_ActualNumChar + myStrlen(sArray[i]);
    }
    
    printf("Actual number of character elements in 2d char array are : %d \n", strArray_ActualNumChar); 

    printf("\n\n");
    printf("Strings in 2D array (or 1D array in 2D array are): \n");
    printf("%s\n", sArray[0]);
    printf("%s\n", sArray[1]);
    printf("%s\n", sArray[2]);
    printf("%s\n", sArray[3]);
    printf("%s\n", sArray[4]);

    return(0);
}

int myStrlen(char str[])
{
    int j; 
    int count = 0;

    for(j = 0; j < MAX_STRING_LENGHT; j++)
    {
        if(str[j] == '\0')
            break; 
        else 
             count++; 
    }
    
    return(count); 
}