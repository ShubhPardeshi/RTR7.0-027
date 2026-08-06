#include<stdio.h>

#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26

#define NUM_STRING 10 
#define MAX_CHAR_PER_STRING 20

#define ALPHABET_BEG 65

typedef struct MyStruct_1
{
   int iArray[INT_ARRAY_SIZE];
   float fArray[FLOAT_ARRAY_SIZE];
}MyDataOne;

typedef struct MyStruct_2
{
   char cArray[CHAR_ARRAY_SIZE];
   char strArray[NUM_STRING][MAX_CHAR_PER_STRING];
}MyDataTwo;

int main(void)
{
    MyDataOne data1;
    MyDataTwo data2; 
    int i;

    //Initialization 
    data1.fArray[0] = 1.2f;
    data1.fArray[1] = 2.2f;
    data1.fArray[2] = 7.3f;
    data1.fArray[3] = 7.2f;
    data1.fArray[4] = 10.2f;

    printf("\n\n");
    printf("Enter %d integers: \n\n", INT_ARRAY_SIZE);
    for(i=0; i<INT_ARRAY_SIZE; i++)
        scanf("%d", &data1.iArray[i]);

    for(i=0; i<CHAR_ARRAY_SIZE; i++)
        data2.cArray[i] = (char)(i + ALPHABET_BEG); 

    strcpy(data2.strArray[0], "Welcome!");
    strcpy(data2.strArray[1], "To");
    strcpy(data2.strArray[2], "The");
    strcpy(data2.strArray[3], "Earth");
    strcpy(data2.strArray[4], "We hope");
    strcpy(data2.strArray[5], "You");
    strcpy(data2.strArray[6], "have a");
    strcpy(data2.strArray[7], "great");
    strcpy(data2.strArray[8], "time");
    strcpy(data2.strArray[9], "visiting here!");

    //Display
    printf("\n\n");
    printf("Printing variable data1 of data type MyDataOne: \n\n");

    printf("data1.iArray: \n");
    for(i=0; i<INT_ARRAY_SIZE; i++)
        printf("data1.iArray[%d] = %d \n", i,data1.iArray[i]);

    printf("data1.fArray: \n");
    for(i=0; i<FLOAT_ARRAY_SIZE; i++)
        printf("data1.fArray[%d] = %f \n", i,data1.fArray[i]);


    printf("\n\n");
    printf("Printing variable data2 of data type MyDataTwo: \n\n");

    printf("data2.cArray: \n");
    for(i=0; i<CHAR_ARRAY_SIZE; i++)
        printf("data2.cArray[%d] = %c \n", i,data2.cArray[i]);

    printf("data2.strArray: \n");
    for(i=0; i<NUM_STRING; i++)
        printf("data2.strArray[%d] = %s \n", i,data2.strArray[i]);

    printf("\n\n");
    return(0);
}