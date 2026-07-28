#include <stdio.h>

extern int global_count; 

void change_Count_One(void)
{
    global_count += 1; 
    printf("change_Count_One(): Value of Global count in File_01 = %d\n", global_count);
}