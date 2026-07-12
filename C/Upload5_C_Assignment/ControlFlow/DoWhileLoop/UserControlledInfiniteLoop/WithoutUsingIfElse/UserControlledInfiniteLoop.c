#include <stdio.h>

int main(void)
{
    //var declaration 
    char option, ch = '\0'; // null character

    //code
    printf("\n\n");
    printf("Once infinite loop begins, Enter q or Q to quite the loop: \n\n");
    printf("\n\n");
    
    do
    {
        do
        {
            printf("In infinite loop - looping\n");
            ch = getch(); 
            
        }while(ch != 'Q' && ch != 'q');

        printf("\n\n");
        printf("Exiting user contolled infite loop");

        printf("\n\n");
        printf("Do you want to start user controlled loop gain? ......y/Y for yes, any ther key for no:\n");
        option = getch();
    }while(option == 'y' || option == 'Y');

    return (0);
}