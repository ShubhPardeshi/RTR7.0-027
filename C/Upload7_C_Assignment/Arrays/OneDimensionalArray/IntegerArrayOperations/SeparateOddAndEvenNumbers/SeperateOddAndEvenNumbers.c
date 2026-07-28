#include<stdio.h>

#define NUMBER_OF_ARRAY_ELE 7

int main(void)
{
    int iArray[NUMBER_OF_ARRAY_ELE];
    int i, num; 
    
    printf("\n\n");
    printf("Enter integer array elements: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        scanf("%d", &num);
        iArray[i] = num; 
    }

    printf("\n\n");
    printf("Even numbers among array are: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        if((iArray[i] % 2) == 0)
            printf("%d\n", iArray[i]);
    }

    printf("\n\n");
    printf("Odd numbers among array are: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        if((iArray[i] % 2) != 0)
            printf("%d\n", iArray[i]);
    }

    return(0);
}