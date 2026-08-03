#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char chArray_1[MAX_STRING_LENGTH], chArray_2[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(chArray_1, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(chArray_2, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("**********Before concatination**********");
    printf("\n\n");
    printf("The first string entered by you: %s\n\n", chArray_1);

    printf("\n\n");
    printf("The second string entered by you: %s\n\n", chArray_2);

    strcat(chArray_1, chArray_2); 

    printf("\n\n");
    printf("**********After concatination**********");
    printf("\n\n");
    printf("chArray_1 is : %s\n\n", chArray_1);

    printf("\n\n");
    printf("chArray_2 is: %s\n\n", chArray_2);

    return(0);
}