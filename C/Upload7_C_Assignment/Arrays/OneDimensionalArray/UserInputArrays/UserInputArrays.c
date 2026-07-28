#include <stdio.h>

#define INT_ARRAY_NUMBER_OF_ELEMENTS 5
#define FLOAT_ARRAY_NUMBER_OF_ELEMETS 3
#define CHAR_ARRAY_NUMBER_OF_ELEMETS 15

int main(void)
{
    int iArray[INT_ARRAY_NUMBER_OF_ELEMENTS];
    float fArray[FLOAT_ARRAY_NUMBER_OF_ELEMETS];
    char cArray[CHAR_ARRAY_NUMBER_OF_ELEMETS];

    int i, num; 

    printf("\n\n"); 
    printf("Enter elements for integer array: \n");
    for(i=0; i<INT_ARRAY_NUMBER_OF_ELEMENTS; i++)
        scanf("%d", &iArray[i]);

    printf("\n\n"); 
    printf("Enter elements for float array: \n");
    for(i=0; i<FLOAT_ARRAY_NUMBER_OF_ELEMETS; i++)
        scanf("%f", &fArray[i]);

    printf("\n\n"); 
    printf("Enter elements for char array: \n");
    for(i=0; i<CHAR_ARRAY_NUMBER_OF_ELEMETS; i++)
        scanf("%c", &cArray[i]);

    printf("\n\n"); 
    printf("Array elements for integer array are: \n");
    for(i=0; i<INT_ARRAY_NUMBER_OF_ELEMENTS; i++)
        printf("%d | ", iArray[i]);

    printf("\n\n"); 
    printf("Array elements for float array are: \n");
    for(i=0; i<FLOAT_ARRAY_NUMBER_OF_ELEMETS; i++)
        printf("%f | ", fArray[i]);

    printf("\n\n"); 
    printf("Array elements for char array: \n");
    for(i=0; i<CHAR_ARRAY_NUMBER_OF_ELEMETS; i++)
        printf("%c | ", cArray[i]);

    return(0);
}