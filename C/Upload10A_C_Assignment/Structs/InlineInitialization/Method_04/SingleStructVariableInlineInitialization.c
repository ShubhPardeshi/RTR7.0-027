#include<stdio.h>

typedef struct MyStruct
{
    int i;
    float f; 
    double d;
    char c;
} Mydata; 

int main(void)
{
    Mydata data1 = {35, 3.9f, 1.23765, 'A'};
    Mydata data2 = {'P', 6.2f, 12.199523, 68};
    Mydata data3 = {36,'G'};
    Mydata data4 = {79};

    printf("\n\n");
    printf("Data members of structures data1 are: \n");
    printf("i = %d\n", data1.i);
    printf("f = %f\n", data1.f);
    printf("d = %lf\n", data1.d);
    printf("c = %c\n", data1.c);

    printf("\n\n");
    printf("Data members of structures data2 are: \n");
    printf("i = %d\n", data2.i);
    printf("f = %f\n", data2.f);
    printf("d = %lf\n", data2.d);
    printf("c = %c\n", data2.c);

    printf("\n\n");
    printf("Data members of structures data3 are: \n");
    printf("i = %d\n", data3.i);
    printf("f = %f\n", data3.f);
    printf("d = %lf\n", data3.d);
    printf("c = %c\n", data3.c);

    printf("\n\n");
    printf("Data members of structures data4 are: \n");
    printf("i = %d\n", data4.i);
    printf("f = %f\n", data4.f);
    printf("d = %lf\n", data4.d);
    printf("c = %c\n", data4.c);

    return(0);
}