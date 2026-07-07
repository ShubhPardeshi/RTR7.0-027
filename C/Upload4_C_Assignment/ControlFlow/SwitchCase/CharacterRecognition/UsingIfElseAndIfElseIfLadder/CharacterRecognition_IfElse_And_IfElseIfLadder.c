#include<stdio.h>
#include<conio.h> //getch()

//A-Z 65-90
#define CHAR_AlPHABET_UPPERCASE_BEGINNING 65
#define CHAR_AlPHABET_UPPERCASE_END 90

//a-z 97-122    
#define CHAR_AlPHABET_LOWERCASE_BEGINNING 97
#define CHAR_AlPHABET_LOWERCASE_END 122

//0-9 
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_END 57

int main(void) {

    //var declaration
    int ch_value; 
    char ch;

    //code 
    printf("\n\n");
    printf("Enter a character: ");
    ch = getch();

    printf("\n\n");

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
            printf("character entered \'%c\' is an vowel!!\n\n", ch);
    }
    else {
            ch_value = (int)ch;

             if((ch_value >= CHAR_AlPHABET_UPPERCASE_BEGINNING && ch_value <= CHAR_AlPHABET_UPPERCASE_END) 
             || (ch_value >= CHAR_AlPHABET_LOWERCASE_BEGINNING && ch_value <= CHAR_AlPHABET_LOWERCASE_END)) {
                printf("character entered \'%c\' is a consonant!!\n\n", ch);
            }
            else if(ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_END) {
                printf("character entered \'%c\' is a digit!!\n\n", ch);
            }
            else {
                printf("character entered \'%c\' is a special character!!\n\n", ch);
            }
    }

    printf("If-elseif-else ladder completed!!\n\n");

    return(0);
}