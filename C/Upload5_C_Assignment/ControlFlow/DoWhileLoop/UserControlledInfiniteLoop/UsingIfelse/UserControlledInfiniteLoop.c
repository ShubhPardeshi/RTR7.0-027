#include <stdio.h>

int main(void)
{
    //var declaration 
    char option, ch = '\0'; // null character

    //code
    printf("\n\n");
    printf("Once infinite loop begins, Enter q or Q to quite the loop: \n\n");
    printf("Enter y or Y to initiate user controlled infinite loop: ");
    printf("\n\n");
    option = getch();

    if (option == 'y' || option == 'Y')
    {
        do //Infinite loop
        {
            printf("In infinite loop - looping\n");
            ch = getch(); 
            if (ch == 'q' || ch == 'Q')
            {
                break; 
            }
        }while(1);
    }
    
    printf("\n\n");
    printf("Exiting user contolled infite loop");
    printf("\n\n");

    return (0);
}