#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char chArrayOriginal[MAX_STRING_LENGTH], charArrayCopy[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArrayOriginal, MAX_STRING_LENGTH);

    strcpy(charArrayCopy, chArrayOriginal);

    printf("\n\n");
    printf("The original string entered by you: %s\n\n", chArrayOriginal);

    printf("\n\n");
    printf("The copied string is: %s\n\n", charArrayCopy);

    return(0);
}