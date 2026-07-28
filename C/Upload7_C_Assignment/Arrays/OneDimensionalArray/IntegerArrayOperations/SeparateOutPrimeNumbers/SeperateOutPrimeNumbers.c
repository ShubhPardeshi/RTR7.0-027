#include<stdio.h>

#define NUMBER_OF_ARRAY_ELE 10

int main(void)
{
    int iArray[NUMBER_OF_ARRAY_ELE];
    int i, num, count; 
    
    printf("\n\n");
    printf("Enter integer array elements: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        scanf("%d", &num);
        if(num < 0)
            num *= (-1); 

        iArray[i] = num; 
    }

    printf("\n\n");
    printf("Array elemets are: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
       printf("%d\n", iArray[i]);
    }

    printf("\n\n");
    printf("Prime numbers among array are: \n");
    for(i=0; i<NUMBER_OF_ARRAY_ELE; i++)
    {
        for(int j = 1; j <= iArray[i]; j++)
        {
            if((iArray[i] % j) == 0)
                count++; 
        }

        if(count == 2)
            printf("%d\n", iArray[i]);

        count = 0;
    }

    return(0);
}