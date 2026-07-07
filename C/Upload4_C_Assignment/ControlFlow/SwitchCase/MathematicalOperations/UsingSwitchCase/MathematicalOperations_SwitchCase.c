#include<stdio.h> //printf()
#include<conio.h> //getch()

int main(void) {

    //var declaration
    int a, b; 
    int result;
    char option, option_division;

    //code 
    printf("\n\n");

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter option in character: \n\n");
    printf("'A' or 'a' for Addition\n"); 
    printf("'S' or 's' for Subtraction\n");
    printf("'M' or 'm' for Multiplication\n");  
    printf("'D' or 'd' for Division\n");

    printf("Enter your choice: ");
    option = getch();

    printf("\n\n");

    switch(option) {
        case 'A':
        case 'a':
            result = a + b;
            printf("Addition of %d and %d is: %d\n\n", a, b, result);
            break;

        case 'S':
        case 's':
            if(b >= a) {
                result = b - a;
                printf("Subtraction of %d and %d is: %d\n\n", b, a, result);
            } else {
                result = a - b;
                printf("Subtraction of %d and %d is: %d\n\n", a, b, result);
            }
            break;

        case 'M':
        case 'm':
            result = a * b;
            printf("Multiplication of %d and %d is: %d\n\n", a, b, result);
            break;

        case 'D':
        case 'd':
            printf("Enter option in character: \n\n");
            printf("'Q' or 'q' for Quotient\n");
            printf("'R' or 'r' for Remainder\n");
            printf("Enter your choice: ");
            option_division = getch();
            printf("\n\n");

            switch(option_division) {
                case 'Q':
                case 'q':
                case '/':
                if(a >= b) {
                    result = a / b;
                    printf("Quotient of %d and %d is: %d\n\n", a, b, result);
                } else {
                    result = b / a;
                    printf("Quotient of %d and %d is: %d\n\n", b, a, result);
                }
                break;
                case 'R':
                case 'r':
                case '%':
                if(a >= b) {
                    result = a % b;
                    printf("Remainder of %d and %d is: %d\n\n", a, b, result);
                } else {
                    result = b % a;
                    printf("Remainder of %d and %d is: %d\n\n", b, a, result);
                }
                break;
                default:
                    printf("Invalid option for division!!\n\n");
                break;
            }
            break;

        default:
            printf("Invalid option!!\n\n");
            break;
    }
    
    printf("Switch case block completed!!\n\n");
    return(0);
}