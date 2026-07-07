#include<stdio.h>

int main(void) {

    //var declaration
    int a; 

    //code 
    printf("\n\n");

    a = 5;
    if (a) {
        printf("if-block 1 - 'A' exists and value is =  %d\n\n", a);
    }

    a = -5;
    if (a) {
        printf("if-block 2 - 'A' exists and value is =  %d\n\n", a);
    }
    
    a = 0;
    if (a) {
        printf("if-block 3 - 'A' exists and value is =  %d\n\n", a);
    }

    printf("All 3 statements are executed\n\n");
    return(0);
}