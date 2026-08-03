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

    //initializatio 
    MyStrCpy("India",sArray[0]);
    MyStrCpy("Sweden",sArray[1]);
    MyStrCpy("Japan",sArray[2]);
    MyStrCpy("Peru",sArray[3]);
    MyStrCpy("Svalbard",sArray[4]);

    printf("\n\n");
    printf("Strings in 2D array are: \n");
    for(int i = 0; i < strArray_NumRows; i++)
         printf("%s \n", sArray[i]);

    printf("\n\n");
    return(0);
}

void MyStrCpy(char orgStr[], char copyStr[])
{
   int MyStrlen(char[]);

   int iStrLength = 0; 
   int j;

   iStrLength = MyStrlen(orgStr);

   for(j = 0; j < iStrLength; j++)
        copyStr[j] = orgStr[j]; 
    
   copyStr[j] = '\0'; //Null terminator is not added hence we add terminator for string
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