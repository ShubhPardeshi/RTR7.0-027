#include<stdio.h>

typedef struct MyStruct
{
    int i;
    float f; 
    char c;
    double d;
} MyData; 

int main(void)
{
    int int_size, float_size, char_size, double_size; 
    int struct_size;

    MyData data;
    data.i = 87;
    data.f = 7.9f;
    data.c = 'D';
    data.d = 9.90;

    printf("\n\n");
    printf("Data members of structures are: \n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.d = %lf\n", data.d);
    printf("data.c = %c\n", data.c);

    int_size = sizeof(data.i); 
    float_size = sizeof(data.f);
    char_size = sizeof(data.c);
    double_size = sizeof(data.d);

    printf("\n\n");
    printf("Size of data members of structures are: \n");
    printf("data.i = %d\n", int_size);
    printf("data.f = %d\n", float_size);
    printf("data.d = %d\n", char_size);
    printf("data.c = %d\n", double_size);

    struct_size = sizeof(struct MyStruct);

    printf("\n\n");
    printf("Size of structure is = %d \n", struct_size);
    printf("Total size of MyStruct data variable is = %d \n", sizeof(data));
}