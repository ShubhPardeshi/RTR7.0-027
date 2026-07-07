#include<stdio.h>

int main(void) {

    //var declaration
    int age; 

    //code 
    printf("\n\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age >= 18) {
        printf("You are an eligible voter!!!\n\n");
    }
    
    return(0);
}