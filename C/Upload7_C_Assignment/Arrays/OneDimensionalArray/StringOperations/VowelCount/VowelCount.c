#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrlen(char[]);

    char chArray[MAX_STRING_LENGTH];
    int iStrLength; 
    int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0; 
    int i; 

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("The string entered by you: %s\n\n", chArray);

    iStrLength = MyStrlen(chArray); 
   
    for(i = 0; i < iStrLength; i++)
    {
        switch(chArray[i])
        {
            case 'a':
            case 'A': 
                count_A++; 
                break; 
            case 'e':
            case 'E':
                count_E++; 
                break;
            case 'i':
            case 'I':
                count_I++; 
                break;
            case 'o':
            case 'O':
                count_O++; 
                break;
            case 'u':
            case 'U':
                count_U++; 
                break;
            default: 
                break;
        }
    }

    printf("\n\n");
    printf("A has occured %d times in string!!\n", count_A);
    printf("E has occured %d times in string!!\n", count_E);
    printf("I has occured %d times in string!!\n", count_I);
    printf("O has occured %d times in string!!\n", count_O);
    printf("U has occured %d times in string!!\n", count_U);

    return(0);
}

int MyStrlen(char str[])
{
    int j; 
    int str_length = 0;
    
    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0')
            break; 
        else 
            str_length++; 
    }

    return(str_length);
}