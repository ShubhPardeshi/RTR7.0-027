#include <stdio.h>

int main(void)
{
    //var declaration 
    char ch = '\0'; // null character
    int i; 

    //code
    printf("\n\n");
    printf("Printing even numbers from 1 - 100 for every user input. Exiting the loop when use enters 'Q' OR 'q': \n\n"); 
    printf("Enter 'q' or 'Q' to quite the loop: \n\n");

    for(i = 1; i <= 100; i++) 
    {   
        if(i % 2 == 0)
            printf("\t %d \n", i);

        ch = getch(); 
        if (ch == 'q' || ch == 'Q')
        {
            break; 
        }
    }

    
    printf("\n\n");
    printf("Exiting loop");
    printf("\n\n");

    return (0);
}