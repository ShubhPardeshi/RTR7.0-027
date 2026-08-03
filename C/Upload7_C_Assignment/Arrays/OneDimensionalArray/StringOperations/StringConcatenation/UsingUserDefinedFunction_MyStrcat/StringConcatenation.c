#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrCat(char[], char[]);

    char chArray_1[MAX_STRING_LENGTH], chArray_2[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(chArray_1, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(chArray_2, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("**********Before concatination**********");
    printf("\n\n");
    printf("The first string entered by you: %s\n\n", chArray_1);

    printf("\n\n");
    printf("The second string entered by you: %s\n\n", chArray_2);

    MyStrCat(chArray_1, chArray_2); 

    printf("\n\n");
    printf("**********After concatination**********");
    printf("\n\n");
    printf("chArray_1 is : %s\n\n", chArray_1);

    printf("\n\n");
    printf("chArray_2 is: %s\n\n", chArray_2);

    return(0);
}

void MyStrCat(char strOne[], char strTwo[])
{
    int MyStrlen(char[]); 

    int iStrLength_one, iStrLength_two; 
    int i, j; 

    iStrLength_one = MyStrlen(strOne); 
    iStrLength_two = MyStrlen(strTwo);

    for(i = iStrLength_one, j = 0; j < iStrLength_two; i++, j++)
        strOne[i] = strTwo[j];

    strOne[i] = '\0';
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