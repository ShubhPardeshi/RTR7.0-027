#include<stdio.h>

int main(void) {

    //var declaration
    int num_month; 

    //code 
    printf("\n\n");
    printf("Enter value for month (1-12): ");
    scanf("%d", &num_month);

    printf("\n\n");

    if(num_month == 1) {
        printf("Month number of %d is January\n\n", num_month);
    }
    else if(num_month == 2) {
        printf("Month number of %d is February\n\n", num_month);
    }
    else if(num_month == 3) {
        printf("Month number of %d is March\n\n", num_month);
    }
    else if(num_month == 4) {
        printf("Month number of %d is April\n\n", num_month);
    }
    else if(num_month == 5) {
        printf("Month number of %d is May\n\n", num_month);
    }
    else if(num_month == 6) {
        printf("Month number of %d is June\n\n", num_month);
    }
    else if(num_month == 7) {
        printf("Month number of %d is July\n\n", num_month);
    }
    else if(num_month == 8) {
        printf("Month number of %d is August\n\n", num_month);
    }
    else if(num_month == 9) {
        printf("Month number of %d is September\n\n", num_month);
    }
    else if(num_month == 10) {
        printf("Month number of %d is October\n\n", num_month);
    }
    else if(num_month == 11) {
        printf("Month number of %d is November\n\n", num_month);
    }
    else if(num_month == 12) {
        printf("Month number of %d is December\n\n", num_month);
    }
    else {
        printf("Invalid month!!\n\n");
    }

    printf("If-elseif-else ladder completed!!\n\n");

    return(0);
}