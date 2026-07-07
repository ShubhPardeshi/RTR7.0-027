#include<stdio.h>

int main(void) {

    //var declaration
    int num_month; 

    //code 
    printf("\n\n");
    printf("Enter value for month (1-12): ");
    scanf("%d", &num_month);

    printf("\n\n");

    switch(num_month) {
        case 1:
            printf("Month number of %d is January\n\n", num_month);
            break;
        case 2:
            printf("Month number of %d is February\n\n", num_month);
            break;
        case 3:
            printf("Month number of %d is March\n\n", num_month);
            break;
        case 4:
            printf("Month number of %d is April\n\n", num_month);
            break;
        case 5:
            printf("Month number of %d is May\n\n", num_month);
            break;
        case 6:
            printf("Month number of %d is June\n\n", num_month);
            break;
        case 7:
            printf("Month number of %d is July\n\n", num_month);
            break;
        case 8:
            printf("Month number of %d is August\n\n", num_month);
            break;
        case 9:
            printf("Month number of %d is September\n\n", num_month);
            break;
        case 10:
            printf("Month number of %d is October\n\n", num_month);
            break;
        case 11:
            printf("Month number of %d is November\n\n", num_month);
            break;
        case 12:
            printf("Month number of %d is December\n\n", num_month);
            break;

        default:
            printf("Invalid month!!\n\n");
    }

    printf("Switch case block completed!!\n\n");

    return(0);
}