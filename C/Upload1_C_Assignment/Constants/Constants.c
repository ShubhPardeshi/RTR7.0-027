#include <stdio.h>

#define MY_PI 3.1415926535897932

#define AMC_STR "AMC RTR7.0 2026-27"

//not named 
enum
{
	SUNDAY, 
	MONDAY, 
	TUESDAY, 
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATUEDAY
};

enum
{
	JANUARY = 1, 
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

//named 
enum bool
{
	TRUE = 1, 
	FALSE = 0
};

enum Numbers 
{
	ONE, 
	TWO,
	THREE, 
	FOUR, 
	FIVE = 5,
	SIX, 
	SEVEN, 
	EIGHT,
	NINE,
	TEN
};

int main(void)
{
	//LOCAL const
	const double epsilon = 0.000001;

	//code 
	printf("\n\n");
	printf("Local constant epsilon = %lf\n\n", epsilon);

	printf("sunday is day number: %d \n", SUNDAY);
	printf("monday is day number: %d \n", MONDAY);
	printf("tuesday is day number: %d \n", TUESDAY);
	printf("wednesday is day number: %d \n", WEDNESDAY);
	printf("thursday is day number: %d \n", THURSDAY);
	printf("friday is day number: %d \n", FRIDAY);
	printf("saturday is day number: %d \n\n", SATUEDAY);

	printf("one is enum number: %d \n", ONE);
	printf("two is enum number: %d \n", TWO);
	printf("three is enum number: %d \n", THREE);
	printf("four is enum number: %d \n", FOUR);
	printf("five is enum number: %d \n", FIVE);
	printf("six is enum number: %d \n", SIX);
	printf("seven is enum number: %d \n", SEVEN);
	printf("eight is enum number: %d \n", EIGHT);
	printf("nine is enum number: %d \n", NINE);
	printf("ten is enum number: %d \n\n", TEN);

	printf("january is month number: %d \n", JANUARY);
	printf("february is month number: %d \n", FEBRUARY);
	printf("march is month number: %d \n", MARCH);
	printf("april is month number: %d \n", APRIL);
	printf("may is month number: %d \n", MAY);
	printf("june is month number: %d \n", JUNE);
	printf("july is month number: %d \n", JULY);
	printf("august is month number: %d \n", AUGUST);
	printf("september is month number: %d \n", SEPTEMBER);
	printf("october is month number: %d \n", OCTOBER);
	printf("november is month number: %d \n", NOVEMBER);
	printf("december is month number: %d \n\n", DECEMBER);

	printf("value of true: %d \n", TRUE);
	printf("value of false: %d \n\n", FALSE);

	printf("my PI macro value: %.101f \n\n", MY_PI);
	printf("my PI macro value: %101f \n\n", MY_PI);
	printf("my PI macro value: %.20f \n\n", MY_PI);
	printf("my PI macro value: %20f \n\n", MY_PI);
	printf("area of circle of 5 units : %f \n\n", (MY_PI*2.0f*2.0f) );

	printf("\n\n");
	printf(AMC_STR);
	printf("\n\n");
	printf("amc_str is: %s\n", AMC_STR);
	printf("\n\n");

	return(0);
}