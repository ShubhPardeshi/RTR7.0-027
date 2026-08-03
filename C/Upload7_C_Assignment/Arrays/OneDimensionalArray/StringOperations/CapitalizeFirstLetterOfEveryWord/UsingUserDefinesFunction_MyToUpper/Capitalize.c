#include<stdio.h>
#include<ctype.h>

#define MAX_STRING_LENGHT 512
#define SPACE ' '
#define FULLSTOP '.' 
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
    int myStrlen(char[]);
    char MyToUpper(char);

    char sArray[MAX_STRING_LENGHT], sArray_CapitlizeFirstLetterOfWord[MAX_STRING_LENGHT]; 
    int iStringLenght;  
    int i; 
    int word_cnt = 0, space_cnt = 0; 

    printf("\n\n");
    printf("Enter a string of characters: \n\n");
    gets_s(sArray, MAX_STRING_LENGHT); 

    iStringLenght = myStrlen(sArray); 

    int j = 0; 
    for(i = 0; i < iStringLenght; i++)
    {
       if(i == 0)
       {
         sArray_CapitlizeFirstLetterOfWord[j] = MyToUpper(sArray[i]);
       }
       else if (sArray[i] == SPACE)
       {
         sArray_CapitlizeFirstLetterOfWord[j] = sArray[i];
         sArray_CapitlizeFirstLetterOfWord[j+1] = MyToUpper(sArray[i+1]); 
         i++;
         j++; 
       }
       else if ((sArray[i] == FULLSTOP || sArray[i] == COMMA || sArray[i] == EXCLAMATION || sArray[i] == QUESTION_MARK) && (sArray[i] != SPACE))
       {
         sArray_CapitlizeFirstLetterOfWord[j] = sArray[i];
         sArray_CapitlizeFirstLetterOfWord[j+1] = SPACE; 
         sArray_CapitlizeFirstLetterOfWord[j+2] = MyToUpper(sArray[i+2]);
         j = j + 2; 
         i++;
       }
       else  
         sArray_CapitlizeFirstLetterOfWord[j] = sArray[i];

        j++; 
    }

    sArray_CapitlizeFirstLetterOfWord[j] = '\0'; 

    printf("\n\n");
    printf("String enter by you: %s\n\n", sArray);
    printf("String after capitalizing first letter: %s\n\n", sArray_CapitlizeFirstLetterOfWord);

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

char MyToUpper(char ch)
{
    int num; 
    int c; 

    num = 'a' - 'A'; 

    if((int)ch >= 97 && (int)ch <= 127)
    {
        c = (int)ch - num; 
        return ((char)c);
    }
    else 
        return(ch); 
}
