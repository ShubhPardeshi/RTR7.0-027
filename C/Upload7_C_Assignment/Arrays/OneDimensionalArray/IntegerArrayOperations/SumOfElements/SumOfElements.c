#include<stdio.h>

#define NUMBER_OF_ARRAY_ELE 7

int main(void)
{
    int iArray[NUMBER_OF_ARRAY_ELE];
    int i, num, sum=0; 
    
    printf("\n\n");
    printf("Value of local variable 'i' is: %d\n", i);
    printf("Value of local variable 'num' is: %d\n", num);
    printf("Value of local variable 'sum' is: %d\n", sum);

    printf("\n\n");
    printf("Enter integer array elements: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        scanf("%d", &num);
        iArray[i] = num; 
    }

    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
        sum += iArray[i];

    printf("\n\n");
    printf("Sum of all elemets of array is: %d\n", sum);

    return(0);
}