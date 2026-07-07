#include<stdio.h>

int main(void) {

    //var declaration
    int age; 

    //code 
    printf("\n\n");
    printf("Enter value for age: ");
    scanf("%d", &age);
    printf("\n\n");

    if (age >= 18) {
        printf("if-block \n\n");
        printf("You are eligible to vote!!\n\n");
    } 
    else {
        printf("else-block \n\n");
        printf("You are not eligible to vote!!\n\n");
    }
    printf("BYE!!\n\n");
    return(0);
}