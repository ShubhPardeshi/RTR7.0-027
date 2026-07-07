#include<stdio.h>

int main(void) {

    //var declaration
    int a, b, p; 

    //code 
    a = 5;
    b = 30;
    p = 30;

    //1 
    printf("\n\n");
    if (a < b) {
        printf("if-block 1 \n\n");
        printf("A is less than B!!!\n\n");
    }
    else {
        printf("else-block 1 \n\n");
        printf("A is not less than B!!!\n\n");
    }
    printf("First if-else pair checked!!!\n\n");

    //2
    printf("\n\n");
    if (b != p) {
        printf("if-block 2 \n\n");
        printf("B is not equal to P!!!\n\n");
    }
    else {
        printf("else-block 2 \n\n");
        printf("B is equal to P!!!\n\n");
    }
    printf("Second if-else pair checked!!!\n\n");

    return(0);
}