#include <stdio.h>

int global_count = 0; 

int main(void)
{
    void change_count(void); 
    void change_Count_One(void); //file_01
    void change_Count_Two(void); //file_02

    printf("\n"); 

    change_count(); 
    change_Count_One(); 
    change_Count_Two(); 

    return(0);
}

void change_count(void)
{
   global_count += 1; 
   printf("Global count = %d\n", global_count);
}