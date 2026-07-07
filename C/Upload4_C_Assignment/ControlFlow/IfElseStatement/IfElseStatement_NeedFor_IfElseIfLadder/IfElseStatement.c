#include<stdio.h>

int main(void) {

    //var declaration
    int num; 

    //code 
    printf("\n\n");
    printf("Enter value for num: ");
    scanf("%d", &num);

    if (num < 0) { //if 1 
        printf("num %d is negative\n\n", num);
    } 
    else { //else 1
        if ((num > 0) && (num <= 100)){ //if 2
            printf("num %d is between 1 and 100\n\n", num);
        } 
        else { //else 2
            if (num > 100 && num <= 200) { //if 3
                printf("num %d is between 100 and 200\n\n", num);
            } 
            else { //else 3
                if(num > 200 && num <= 300) { //if 4
                    printf("num %d is between 200 and 300\n\n", num);
                } 
                else { //else 4
                    if(num > 300 && num <= 400) { //if 5
                        printf("num %d is between 300 and 400\n\n", num);
                    } 
                    else { //else 5
                        if(num > 400 && num <= 500) { //if 6
                            printf("num %d is between 400 and 500\n\n", num);
                        } 
                        else { //else 6
                            printf("num %d is greater than 500\n\n", num);
                          }
                        }
                    }
                }
            }
        }
    
    printf("BYE!!\n\n");
    return(0);
}