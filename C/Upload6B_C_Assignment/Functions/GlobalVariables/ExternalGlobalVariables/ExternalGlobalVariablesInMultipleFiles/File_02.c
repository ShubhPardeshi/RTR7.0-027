#include <stdio.h>

extern int global_count; 

void change_Count_Two(void)
{
    global_count += 1; 
    printf("change_Count_Two(): Value of Global count in File_02 = %d\n", global_count);
}