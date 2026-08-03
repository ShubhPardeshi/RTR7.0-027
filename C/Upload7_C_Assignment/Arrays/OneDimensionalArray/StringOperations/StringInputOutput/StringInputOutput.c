#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    char sArray[MAX_STRING_LENGHT]; 

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); //Crashes if entered string is more than given MAX_STRING_LENGHT

    printf("\n\n");
    printf("String entered by you is: ");
    printf("%s\n", sArray);

    return(0);
}