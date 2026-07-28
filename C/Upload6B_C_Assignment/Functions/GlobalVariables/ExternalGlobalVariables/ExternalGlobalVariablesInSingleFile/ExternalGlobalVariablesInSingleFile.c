#include <stdio.h>

int main(void)
{
    void change_count(void);

    extern int global_count; 

    printf("\n");
    printf("Value of global_count before chnage_count() = %d\n", global_count);
    change_count();
    printf("Value of global_count after chnage_count() = %d\n", global_count);
    printf("\n");
    return(0);
}

//This is a global variable and can be accessed in change_count();
//since it is declared after main(), it must be re-declared in main() as external global varible by means of 'extern' keyward and type of the variable.  
int global_count; 

void change_count()
{
    global_count = 5;
    printf("Value of global_count in chnage_count() = %d\n", global_count);
}