#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    int myStrlen(char[]);

    char sArray[MAX_STRING_LENGHT]; 
    int iStringLenght;  

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); //Crashes if entered string is more 20 characters now that given size is 12

    printf("\n\n");
    printf("String entered by you is: ");
    printf("%s\n", sArray);

    printf("\n\n");
    iStringLenght = myStrlen(sArray); 
    printf("Lenght of string entered by you is:%d\n", iStringLenght);

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