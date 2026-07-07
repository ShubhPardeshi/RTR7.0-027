#include<stdio.h>

int main(void) {

    //var declaration
    int a, b; 
    int p, q;
    char ch_result_01, ch_result_02;
    int i_result_01, i_result_02;

    //code 
    printf("\n\n");

    a = 10;
    b = 20;
    ch_result_01 = (a > b) ? 'A' : 'B';
    i_result_01 = (a > b) ? a : b;
    printf("Ternary operator example 01: %c and %d\n\n", ch_result_01, i_result_01);

    p = 100;
    q = 200;
    ch_result_02 = (p != q) ? 'P' : 'Q';
    i_result_02 = (p != q) ? p : q;
    printf("Ternary operator example 02: %c and %d\n\n", ch_result_02, i_result_02);
    
    printf("\n\n");
    return(0);
}