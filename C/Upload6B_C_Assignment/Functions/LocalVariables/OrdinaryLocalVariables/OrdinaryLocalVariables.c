#include <stdio.h>

int main(void)
{
    int a = 5; 

    void change_count(void);

    printf("\n\n");
    printf("A = %d\n\n", a);

    //As local_count is a local variable it will not persist value every call 
    //Every call will have it's own copy and increment by 1
    change_count(); 
    change_count(); 
    change_count(); 

    return(0);
}

void change_count(void)
{
    int local_count = 0; 

    local_count += 1; 
    printf("Local_count = %d\n\n", local_count);
}