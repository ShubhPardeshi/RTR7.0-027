#include<stdio.h>

int main(void) {

    //var declaration
    int age; 

    //code 
    printf("\n\n");
    printf("Enter value for age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!!\n\n");
    } 
    printf("You are not eligible to vote!!\n\n");

    return(0);
}