#include <stdio.h>

int main (void)
{
    //variable inline initialization 
    int a; 
    int b; 
    int c; 
    int result; 

    //code 
    printf("\n\n");
	printf("Enter first integer: ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter second integer: ");
	scanf("%d", &b);

    printf("\n\n");
	printf("Enter third integer: ");
	scanf("%d", &c);

    printf("\n\n");
    printf("If answer is zero(0), it is 'FALSE'\n");
    printf("If answer is one(1), it is 'TRUE'\n\n");

    result = (a <= b) && (b != c);
    printf("LOGICAL AND (&&): Answer is TRUE (1) if and only if BOTH conditions are true. Answer is FALSE (0), if any one or both conditions are false. \n");
    printf("a = %d less than or equal to b = %d AND b = %d is not equal to c=%d     \t Answer = %d\n\n", a, b, b, c, result);
    
    result = (b >= a) || (a == c);
    printf("LOGICAL OR (||): Answer is FALSE (0) if and only if BOTH conditions are FALSE. Answer is TRUE (1), if any one or both conditions are true. \n");
    printf("either b = %d is greater than or equal to a = %d OR a = %d is  equal to c=%d     \t Answer = %d\n\n", b, a, a, c, result);
    
    result = !a;
    printf("a is %d and using NOT(!) logical operator on a gives us     \t Answer = %d\n\n", a, result);
    
    result = !b;
    printf("b is %d and using NOT(!) logical operator on b gives us     \t Answer = %d\n\n", b, result);

    result = !c;
    printf("c is %d and using NOT(!) logical operator on c gives us     \t Answer = %d\n\n", c, result);

    result = (!(a <= b) && !(b != c));
    printf("using logical NOT(!) on (a<=b) and also on (b!=c) and then ANDing them afterwards gives us  \t Answer = %d\n\n", result);
    
    result = !((b >= a) || (a ==c));
    printf("using logical NOT(!) on entire logical expression ( b>=a ) || ( a ==c ) gives us  \t Answer = %d\n\n", result);
    
    printf("\n\n");

    return (0);
}