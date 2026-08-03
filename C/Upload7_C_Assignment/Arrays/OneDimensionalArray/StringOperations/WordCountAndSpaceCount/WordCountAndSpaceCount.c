#include<stdio.h>

#define MAX_STRING_LENGHT 512

int main(void)
{
    int myStrlen(char[]);

    char sArray[MAX_STRING_LENGHT]; 
    int iStringLenght;  
    int i; 
    int word_cnt = 0, space_cnt = 0; 

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); 

    iStringLenght = myStrlen(sArray); 

    for(i = 0; i < MAX_STRING_LENGHT; i++)
    {
        switch(sArray[i])
        {
            case 32: 
                space_cnt++;
                break;
            default: 
                break; 
        }
    }
    
    word_cnt = space_cnt + 1; 

    printf("String enter by you: %s\n\n", sArray);
    printf("Number of spaces: %d\n\n", space_cnt);
    printf("Number of words: %d\n\n", word_cnt);

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