#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrCpy(char[], char[]);

    char sArray[5][20]; 
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

    //initialization 
    sArray[0][0] = 'H'; 
    sArray[0][1] = 'i';
    sArray[0][2] = '!';
    sArray[0][3] = '\0';

    sArray[1][0] = 'I'; 
    sArray[1][1] = ' ';
    sArray[1][2] = 'a';
    sArray[1][3] = 'm';
    sArray[1][4] = '\0';

    sArray[2][0] = 'T'; 
    sArray[2][1] = 'h';
    sArray[2][2] = 'e';
    sArray[2][3] = '\0';

    sArray[3][0] = 'S'; 
    sArray[3][1] = 'h';
    sArray[3][2] = 'u';
    sArray[3][3] = 'b';
    sArray[3][4] = 'h'; 
    sArray[3][5] = 'a';
    sArray[3][6] = 'n';
    sArray[3][7] = 'g';
    sArray[3][8] = 'i';
    sArray[3][9] = '\0';

    sArray[4][0] = 'P'; 
    sArray[4][1] = 'a';
    sArray[4][2] = 'r';
    sArray[4][3] = 'd';
    sArray[4][4] = 'e'; 
    sArray[4][5] = 's';
    sArray[4][6] = 'h';
    sArray[4][7] = 'i';
    sArray[4][8] = '\0';

    printf("\n\n");
    printf("Strings in 2D array are: \n");
    for(int i = 0; i < strArray_NumRows; i++)
         printf("%s \n", sArray[i]);

    printf("\n\n");
    return(0);
}

int MyStrlen(char str[])
{
    int j; 
    int str_length = 0;
    
    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0')
            break; 
        else 
            str_length++; 
    }

    return(str_length);
}