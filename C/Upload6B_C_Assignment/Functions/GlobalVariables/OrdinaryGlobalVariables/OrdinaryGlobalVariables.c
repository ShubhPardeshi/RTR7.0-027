#include <stdio.h>

//Global scope 
int global_count; 

//main 
int main (void)
{
  void change_Count_One(void);
  void change_Count_Two(void); 
  void change_Count_Three(void);

  printf("\n\n");

  printf("Default value of global_count = %d\n", global_count); 

  printf("main() : Value of global_count = %d\n", global_count);

  change_Count_One();
  change_Count_Two(); 
  change_Count_Three(); 

  printf("\n");
  return(0); 
}

//Global scope
void change_Count_One(void)
{
    global_count = 100; 
    printf("change_Count_One() : Value of global_count = %d\n", global_count);
}

void change_Count_Two(void)
{
    global_count += 1; 
    printf("change_Count_Two() : Value of global_count = %d\n", global_count);
}

void change_Count_Three(void)
{
    global_count += 10; 
    printf("change_Count_Three() : Value of global_count = %d\n", global_count);
}