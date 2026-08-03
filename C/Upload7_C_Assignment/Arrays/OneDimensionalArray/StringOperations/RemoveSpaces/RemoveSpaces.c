#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    int myStrlen(char[]);

    char sArray[MAX_STRING_LENGHT], sArray_spaceRemoved[MAX_STRING_LENGHT]; 
    int iStringLenght;  
    int i; 
    int word_cnt = 0, space_cnt = 0; 

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); 

    iStringLenght = myStrlen(sArray); 
    int j = 0; 
    for(i = 0; i < MAX_STRING_LENGHT; i++)
    {
       if(sArray[i] == ' ')
            continue;
       else 
       {
         sArray_spaceRemoved[j] = sArray[i];
         j++; 
       }
    }
    
    sArray_spaceRemoved[j] = '\0';
    
    printf("String enter by you: %s\n\n", sArray);
    printf("String after space removel: %s\n\n", sArray_spaceRemoved);

    return(0);
}

int myStrlen(char str[])
{
    int j; 
    int count = 0;

    for(j = 0; j < MAX_STRING_LENGHT; j++)
    {
        if(str[j] == '\0')
            break; 
        else 
             count++; 
    }
    
    return(count); 
}