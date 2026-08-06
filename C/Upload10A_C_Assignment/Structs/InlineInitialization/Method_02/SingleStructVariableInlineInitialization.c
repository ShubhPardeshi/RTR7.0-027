#include<stdio.h>

typedef struct MyStruct
{
    int i;
    float f; 
    char c;
    double d;
} Mydata; 

Mydata data = {10, 7.3f, 'Z', 47.77};

int main(void)
{
    printf("\n\n");
    printf("Data members of structures are: \n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.d = %lf\n", data.d);
    printf("data.c = %c\n", data.c);

    return(0);
}