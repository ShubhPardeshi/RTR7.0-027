#include <stdio.h>

typedef struct MyPointStruct
{
    int x;
    int y;
} Point; 

Point p1, p2, p3, p4;

int main (void)
{
    p1.x = 9;
    p1.y = 4;

    p2.x = 6;
    p2.y = 2;

    p3.x = 6;
    p3.y = 3;

    p4.x = 6;
    p4.y = 6;

    printf("\n\n");
    printf("Corners of rectangle are: \n");
    printf("Co-ordinate (x,y) of pt1 are:(%d,%d) \n",p1.x, p1.y);
    printf("Co-ordinate (x,y) of pt2 are:(%d,%d) \n",p2.x, p2.y);
    printf("Co-ordinate (x,y) of pt3 are:(%d,%d) \n",p3.x, p3.y);
    printf("Co-ordinate (x,y) of pt4 are:(%d,%d) \n",p4.x, p4.y);

    return(0);

}