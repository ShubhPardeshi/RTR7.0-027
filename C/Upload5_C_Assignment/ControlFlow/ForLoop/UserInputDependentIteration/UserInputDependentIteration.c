#include <stdio.h>

int main(void)
{
    //var declaration 
    int i_num, num, i;

    //code 
    printf("\n\n");

    printf("Enter integer value to begin iteration with :");
    scanf("%d",&i_num);

    printf("How many digits you want to print from %d onwards:", i_num);
    scanf("%d",&num);

    printf("Printing digits from %d to %d:\n", i_num, (i_num + num));
    for(i = i_num; i <= (i_num + num); i++)
    {
        printf("\t%d\n", i);
    }

    printf("\n\n");
    return (0);
}