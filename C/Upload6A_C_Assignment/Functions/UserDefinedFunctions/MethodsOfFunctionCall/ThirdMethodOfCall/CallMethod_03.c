#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    //Function prototypes or declaration
    void Function_country(void);

    //code 
    Function_country();

    return (0);
}

void Function_country(void)
{
    //Function prototypes or declaration
    void Function_ofAMC(void);

    //calls
    Function_ofAMC();

    printf("\n");
    printf("I live in Sweden");
    printf("\n");

}

void Function_ofAMC(void)
{
    void Function_Surname(void); 

    Function_Surname(); 

    printf("\t");
    printf("of ASTROMEDICOMP");

}

void Function_Surname(void)
{
    void Function_MiddleName(void); 

    Function_MiddleName(); 

    printf("\t");
    printf("Pardeshi");
}

void Function_MiddleName(void)
{
    void Function_FirstName(void); 

    Function_FirstName();

    printf("\t");
    printf("Kailash");
}

void Function_FirstName(void)
{
    void Function_Is(void);

    Function_Is(); 

    printf("\t");
    printf("Shubhangi");
}

void Function_Is(void)
{
    void Function_Name(void); 

    Function_Name(); 

    printf("\t");
    printf("Is");
}

void Function_Name(void)
{
    void Function_My(void); 

    Function_My(); 

    printf("\t");
    printf("Name");
}

void Function_My(void)
{
    printf("\n");
    printf("My");
}











