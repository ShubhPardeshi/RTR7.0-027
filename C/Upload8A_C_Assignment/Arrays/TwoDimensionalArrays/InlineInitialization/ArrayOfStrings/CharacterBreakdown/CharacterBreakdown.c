#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    int myStrlen(char[]);

    char sArray[5][20] = {{"HiIAmShubhangi"},{"RTR7Student"},{"ADaughter"},{"ParadoxEmployee"},{"ILoveCats"}}; 
    int iStrLenght[5];
    int strArraySize, strArray_NumRows; 

    strArraySize = sizeof(sArray);
    strArray_NumRows = strArraySize/sizeof(sArray[0]); 

    for(int i = 0; i < strArray_NumRows; i++)
        iStrLenght[i] = myStrlen(sArray[i]);

    printf("\n\n");
    printf("Entire string array is: ");
    for(int i = 0; i < strArray_NumRows; i++)
         printf("%s ", sArray[i]);
    
    printf("\n\n");
    printf("Strings in 2D character array are: ");
    for(int i = 0; i < strArray_NumRows; i++)
    {
        printf("String number %d is: %s \n\n", (i+1), sArray[i]);
        for(int j = 0; j < iStrLenght[i]; j++)
        {
            printf("character %d = %c \n", (j+1), sArray[i][j]);
        }
        printf("\n\n");
    }

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