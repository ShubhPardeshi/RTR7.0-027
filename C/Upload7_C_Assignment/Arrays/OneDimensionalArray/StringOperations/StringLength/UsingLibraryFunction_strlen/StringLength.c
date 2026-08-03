#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    char sArray[MAX_STRING_LENGHT]; 
    int iStrlen; 

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); //Crashes if entered string is more 20 characters now that given size is 12

    printf("\n\n");
    printf("String entered by you is: ");
    printf("%s\n", sArray);

    printf("\n\n");
    iStrlen = strlen(sArray); 
    printf("Lenght of string entered by you is:%d\n", iStrlen);

    return(0);
}