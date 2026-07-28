#include <stdio.h>

int main(void)
{
    int a = 5; 

    void change_count(void);

    printf("\n\n");
    printf("A = %d\n\n", a);

    //As local_count is a static variable only one copy is persisted in a life of program 
    //Every call will increment by 1
    change_count(); 
    change_count(); 
    change_count(); 

    return(0);
}

void change_count(void)
{
    static int local_count = 0; 

    local_count += 1; 
    printf("Local_count = %d\n\n", local_count);
}