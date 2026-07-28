#include<stdio.h>

int main(void)
{
    char charArray_1[] = { 'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0' }; 
    char charArray_2[3] = {'I', 'S', '\0'};
    char charArray_3[] = {'G', 'O', 'A', 'T', '\0'};
    char charArray_4[2] = "!";
    char charArray_5[] = "RTR7-027";

    char charArrayWithoutTermintor[] = {'H', 'i', '!'};

    printf("\n\n");

    printf("Size of charArray_1: %d\n\n", (int)sizeof(charArray_1));
    printf("Size of charArray_2: %d\n\n", (int)sizeof(charArray_2));
    printf("Size of charArray_3: %d\n\n", (int)sizeof(charArray_3));
    printf("Size of charArray_4: %d\n\n", (int)sizeof(charArray_4));
    printf("Size of charArray_5: %d\n\n", (int)sizeof(charArray_5)); 

    printf("\n\n");

    printf("The strings are: \n\n");
    printf("charArray_1: %s \n\n", charArray_1);
    printf("charArray_2: %s \n\n", charArray_2);
    printf("charArray_3: %s \n\n", charArray_3);
    printf("charArray_4: %s \n\n", charArray_4);
    printf("charArray_5: %s \n\n", charArray_5);

    printf("\n\n");
    printf("Size of charArrayWithoutTermintor: %d\n\n", (int)sizeof(charArrayWithoutTermintor));
    printf("charArrayWithoutTermintor: %s \n\n", charArrayWithoutTermintor);

    return(0);
}