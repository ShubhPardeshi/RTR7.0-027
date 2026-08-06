#include <stdio.h>

typedef struct MyPointStruct
{
    int x;
    int y;
} Point; 

int main (void)
{
    Point p1, p2, p3, p4;

    printf("\n\n");
    printf("Enter x-coordinate value for point 1: \n");
    scanf("%d", &p1.x);
    printf("Enter y-coordinate value for point 1: \n");
    scanf("%d", &p1.y);

    printf("\n\n");
    printf("Enter x-coordinate value for point 2: \n");
    scanf("%d", &p2.x);
    printf("Enter y-coordinate value for point 2: \n");
    scanf("%d", &p2.y);

    printf("\n\n");
    printf("Enter x-coordinate value for point 3: \n");
    scanf("%d", &p3.x);
    printf("Enter y-coordinate value for point 3: \n");
    scanf("%d", &p3.y);

    printf("\n\n");
    printf("Enter x-coordinate value for point 4: \n");
    scanf("%d", &p4.x);
    printf("Enter y-coordinate value for point 4: \n");
    scanf("%d", &p4.y);

    printf("\n\n");
    printf("Corners of rectangle are: \n");
    printf("Co-ordinate (x,y) of pt1 are:(%d,%d) \n",p1.x, p1.y);
    printf("Co-ordinate (x,y) of pt2 are:(%d,%d) \n",p2.x, p2.y);
    printf("Co-ordinate (x,y) of pt3 are:(%d,%d) \n",p3.x, p3.y);
    printf("Co-ordinate (x,y) of pt4 are:(%d,%d) \n",p4.x, p4.y);

    return(0);

}