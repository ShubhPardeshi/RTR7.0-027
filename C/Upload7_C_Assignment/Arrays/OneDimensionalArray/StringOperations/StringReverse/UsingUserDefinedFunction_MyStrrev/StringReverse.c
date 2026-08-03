#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrRev(char [], char []);
    char chArrayOriginal[MAX_STRING_LENGTH], chArrayRev[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArrayOriginal, MAX_STRING_LENGTH);

    MyStrRev(chArrayOriginal, chArrayRev);

    printf("\n\n");
    printf("The original string entered by you: %s\n\n", chArrayOriginal);

    printf("\n\n");
    printf("The reverse string is: %s\n\n", chArrayRev);

    return(0);
}

void MyStrRev(char orgStr[], char revStr[])
{
    int MyStrlen(char[]);

    int i, j, len; 

    int iStrLength = MyStrlen(orgStr);
    len = iStrLength-1; 

    for(i=0, j=len; i < iStrLength, j >= 0; i++, j--)
        revStr[i] = orgStr[j];

    revStr[i] = '\0';
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
