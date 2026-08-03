#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrlen(char[]);
    void MyStrCpy(char[], char[]);

    char chArrayOriginal[MAX_STRING_LENGTH], charArrayCopy[MAX_STRING_LENGTH];

    int iStrLength = 0;
    int j;

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArrayOriginal, MAX_STRING_LENGTH);

    MyStrCpy(chArrayOriginal,charArrayCopy);

    iStrLength = MyStrlen(chArrayOriginal);

    for(j = 0; j < iStrLength; j++)
    {
        switch(charArrayCopy[j])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                charArrayCopy[j] = '*';
                break; 
            default: 
                break;
            
         }
    }

    printf("\n\n");
    printf("The original string entered by you: %s \n\n", chArrayOriginal);

    printf("\n\n");
    printf("The replaced string is: %s \n\n", charArrayCopy);

    return(0);
}

void MyStrCpy(char orgStr[], char copyStr[])
{
   int MyStrlen(char[]);

   int iStrLength = 0;
   int j;

   iStrLength = MyStrlen(orgStr);
   printf("strlen is: %d", iStrLength);

   for(j = 0; j < iStrLength; j++)
        copyStr[j] = orgStr[j]; 
    
   copyStr[j] = '\0'; //Null terminator is not added hence we add terminator for string
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