#include<stdio.h>

typedef struct MyPointStruct
{
    int x; 
    int y;
} MyData; 

typedef struct MyPointProperties
{
    int Quad; 
    char axis_location[50];
} MyPointData; 
    
int main(void)
{
    MyData p1; 
    MyPointData p1_data; 

    printf("\n\n");
    printf("Enter x co-ordinate for p1:\n");
    scanf("%d", &p1.x);
    printf("Enter y co-ordinate for p1:\n");
    scanf("%d", &p1.y);

    printf("x and y co-ordinate for p1: (%d,%d)!!\n", p1.x, p1.y);

    if(p1.x == 0 && p1.y == 0)
        printf("Point p1 is at the origin (0,0):\n");
    else 
    {
        if(p1.x == 0)
        {
            if(p1.y < 0)
                strcpy(p1_data.axis_location, "Negative Y");
            else if (p1.y > 0)
                strcpy(p1_data.axis_location, "Positive Y");
            
            p1_data.Quad = 0;
            printf("Point lie on the %s axis!!\n\n",p1_data.axis_location);
        }
        else if(p1.y == 0)
        {
            if(p1.x < 0)
                strcpy(p1_data.axis_location, "Negative X");
            else if (p1.x > 0)
                strcpy(p1_data.axis_location, "Positive X");
            
            p1_data.Quad = 0;
            printf("Point lie on the %s axis!!\n\n",p1_data.axis_location);
        }
        else 
        {
            p1_data.axis_location[0] = '\0';

            if(p1.x > 0 && p1.y > 0)
                p1_data.Quad = 1;
            else if(p1.x < 0 && p1.y > 0)
                p1_data.Quad = 2;
            else if(p1.x < 0 && p1.y < 0)
                p1_data.Quad = 3;
            else 
                p1_data.Quad = 4;

            printf("Point lies in %d quad\n\n", p1_data.Quad );
        }
    }

    return(0);
}