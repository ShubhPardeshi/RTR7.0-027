#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    //Function prototypes or declaration
    void display_information(void);
    void Function_country(void);

    //code 
    display_information();
    Function_country();

    return (0);
}

void display_information(void)
{
    //Function prototypes or declaration
    void Function_My(void);
    void Function_Name(void);
    void Function_Is(void);
    void Function_FirstName(void);
    void Function_MiddleName(void);
    void Function_Surname(void);
    void Function_ofAMC(void);

    //calls
    Function_My();
    Function_Name();
    Function_Is();
    Function_FirstName();
    Function_MiddleName();
    Function_Surname();
    Function_ofAMC();
}

void Function_My(void)
{
    printf("\n");
    printf("My");
}

void Function_Name(void)
{
    printf("\t");
    printf("Name");
}

void Function_Is(void)
{
    printf("\t");
    printf("Is");
}

void Function_FirstName(void)
{
    printf("\t");
    printf("Shubhangi");
}

void Function_MiddleName(void)
{
    printf("\t");
    printf("Kailash");
}

void Function_Surname(void)
{
    printf("\t");
    printf("Pardeshi");
}

void Function_ofAMC(void)
{
    printf("\t");
    printf("of ASTROMEDICOMP");
}

void Function_country(void)
{
    printf("\n");
    printf("I live in Sweden");
    printf("\n");
}