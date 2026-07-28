#include <stdio.h>

int main(void)
{
    int iArrayOne[10]; 
    int iArrayTwo[10]; 

    iArrayOne[0] = 3; 
    iArrayOne[1] = 6;
    iArrayOne[2] = 9;
    iArrayOne[3] = 12;
    iArrayOne[4] = 15;
    iArrayOne[5] = 18;
    iArrayOne[6] = 21;
    iArrayOne[7] = 24;
    iArrayOne[8] = 27; 
    iArrayOne[9] = 30; 

    printf("\n\n");
    printf("Piece-meal (hard-coded) initialization and  display of elements of Array 'iArrayOne[]': \n\n");
    printf("1st elements of 'iArrayOne[]' or elemets at oth index of array 'iArrayOne[]' = %d \n", iArrayOne[0]);
    printf("2nd elements of 'iArrayOne[]' or elemets at 1th index of array 'iArrayOne[]' = %d \n", iArrayOne[1]);
    printf("3rd elements of 'iArrayOne[]' or elemets at 2nd index of array 'iArrayOne[]' = %d \n", iArrayOne[2]);
    printf("4th elements of 'iArrayOne[]' or elemets at 3rd index of array 'iArrayOne[]' = %d \n", iArrayOne[3]);
    printf("5th elements of 'iArrayOne[]' or elemets at 4th index of array 'iArrayOne[]' = %d \n", iArrayOne[4]);
    printf("6th elements of 'iArrayOne[]' or elemets at 5th index of array 'iArrayOne[]' = %d \n", iArrayOne[5]);
    printf("7th elements of 'iArrayOne[]' or elemets at 6th index of array 'iArrayOne[]' = %d \n", iArrayOne[6]);
    printf("8th elements of 'iArrayOne[]' or elemets at 7th index of array 'iArrayOne[]' = %d \n", iArrayOne[7]);
    printf("9th elements of 'iArrayOne[]' or elemets at 8th index of array 'iArrayOne[]' = %d \n", iArrayOne[8]);
    printf("10th elements of 'iArrayOne[]' or elemets at 9th index of array 'iArrayOne[]' = %d \n", iArrayOne[9]);

    printf("\n\n");

    printf("Enter 1st element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[0]);
    printf("Enter 2nd element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[1]);
    printf("Enter 3rd element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[2]);
    printf("Enter 4th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[3]);
    printf("Enter 5th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[4]);
    printf("Enter 6th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[5]);
    printf("Enter 7th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[6]);
    printf("Enter 8th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[7]);
    printf("Enter 9th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[8]);
    printf("Enter 10th element of array 'iArrayTwo[]': "); 
    scanf("%d", &iArrayTwo[9]);

    printf("\n\n");
    printf("Piece-meal initialization and  display of elements of Array 'iArrayTwo[]': \n\n");
    
    printf("1st elements of 'iArrayTwo[]' or elemets at oth index of array 'iArrayTwo[]' = %d \n", iArrayTwo[0]);
    printf("2nd elements of 'iArrayTwo[]' or elemets at 1th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[1]);
    printf("3rd elements of 'iArrayTwo[]' or elemets at 2nd index of array 'iArrayTwo[]' = %d \n", iArrayTwo[2]);
    printf("4th elements of 'iArrayTwo[]' or elemets at 3rd index of array 'iArrayTwo[]' = %d \n", iArrayTwo[3]);
    printf("5th elements of 'iArrayTwo[]' or elemets at 4th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[4]);
    printf("6th elements of 'iArrayTwo[]' or elemets at 5th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[5]);
    printf("7th elements of 'iArrayTwo[]' or elemets at 6th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[6]);
    printf("8th elements of 'iArrayTwo[]' or elemets at 7th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[7]);
    printf("9th elements of 'iArrayTwo[]' or elemets at 8th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[8]);
    printf("10th elements of 'iArrayTwo[]' or elemets at 9th index of array 'iArrayTwo[]' = %d \n", iArrayTwo[9]);

    return(0);
}