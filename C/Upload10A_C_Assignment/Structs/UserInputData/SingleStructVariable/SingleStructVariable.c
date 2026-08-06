#include<stdio.h>
#include<conio.h>

typedef struct MyStruct
{
    int i;
    float f; 
    char c;
    double d;
} MyData;

int main(void)
{
    MyData data;

    printf("\n\n");
    printf("Enter integer value for data member i of struct MyStruct: \n");
    scanf("%d", &data.i);

    printf("Enter char value for data member c of struct MyStruct: \n");
    data.c = getch();

    printf("Enter double value for data member f of struct MyStruct: \n");
    scanf("%lf", &data.d);

    printf("Enter float value for data member f of struct MyStruct: \n");
    scanf("%f", &data.f);

    printf("\n\n");
    printf("Entered value for data members of structures are: \n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.d = %lf\n", data.d);
    printf("data.c = %c\n", data.c);

    return(0);
}