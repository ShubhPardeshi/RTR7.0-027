#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_STR_LENGHT 1024

struct CharacterCount
{
    char ch;
    int ch_count; 
}character_count[] = { {'A', 0}, 
                       {'B', 0},
                       {'C', 0},
                       {'D', 0},
                       {'E', 0},
                       {'F', 0},
                       {'G', 0},
                       {'H', 0},
                       {'I', 0},
                       {'J', 0},
                       {'K', 0},
                       {'L', 0},
                       {'M', 0},
                       {'N', 0},
                       {'O', 0},
                       {'P', 0},
                       {'Q', 0},
                       {'R', 0},
                       {'S', 0},
                       {'T', 0},
                       {'U', 0},
                       {'V', 0},
                       {'W', 0},
                       {'X', 0},
                       {'Y', 0},
                       {'Z', 0} };
                
#define SIZE_OF_ENTIRE_STRUCT sizeof(character_count)
#define SIZE_OF_ONE_STRUCT_FROM_ARRAY_OF_STRUCTS sizeof(character_count[0])
#define NUM_ELEMETS_IN_ARRAY (SIZE_OF_ENTIRE_STRUCT/SIZE_OF_ONE_STRUCT_FROM_ARRAY_OF_STRUCTS)

int main(void)
{
    char str[MAX_STR_LENGHT]; 
    int i, j, actual_string_length = 0;
    
    printf("\n\n");
    printf("Enter a string: \n");
    gets_s(str, MAX_STR_LENGHT);

    actual_string_length = strlen(str);

    printf("\n\n");
    printf("String you have entered: \n");
    printf("%s", str);

    for(i = 0; i < actual_string_length; i++)
    {
        for(j = 0; j < NUM_ELEMETS_IN_ARRAY; j++)
        {
            str[i] = toupper(str[i]);
            if(str[i] == character_count[j].ch)
                character_count[j].ch_count++;
        }
    }

    printf("\n\n");
    printf("Number of occurances of all characters from the alphabet are: \n");
    for(i = 0; i < NUM_ELEMETS_IN_ARRAY; i++)
    {
        printf("Character %c = %d \n", character_count[i].ch, character_count[i].ch_count); 
    }

    printf("\n\n");
    return(0); 
}