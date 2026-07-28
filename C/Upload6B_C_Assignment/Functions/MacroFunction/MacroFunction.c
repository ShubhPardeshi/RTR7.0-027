#include <stdio.h>

#define MAX_NUMBER(a,b) ((a>b) ? a : b)

int main(int argc, char *argv[], char *envp[])
{
    int inum_01 = 0; 
    int inum_02 = 0; 
    int iResult = 0; 

    float fnum_01 = 0.0f; 
    float fnum_02 = 0.0f; 
    float fResult = 0.0f; 

    printf("\n\n"); 
    printf("Enter first integer: \n\n");
    scanf("%d", &inum_01); 
    
    printf("\n\n"); 
    printf("Enter second integer: \n\n");
    scanf("%d", &inum_02); 

    iResult = MAX_NUMBER(inum_01, inum_02);
    printf("\n\n"); 
    printf("Output of MACRO function is = %d \n\n", iResult);

    printf("\n\n"); 

    printf("\n\n"); 
    printf("Enter first float: \n\n");
    scanf("%f", &fnum_01); 
    
    printf("\n\n"); 
    printf("Enter second float: \n\n");
    scanf("%f", &fnum_02); 

    fResult = MAX_NUMBER(fnum_01, fnum_02);
    printf("\n\n"); 
    printf("Output of MACRO function is = %f \n\n", fResult);

    printf("\n\n"); 
    return(0);
}