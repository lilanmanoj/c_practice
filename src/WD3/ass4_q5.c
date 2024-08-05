#include <stdio.h>

int main(){
	// write a program to input any year, and check whether the year is a leap year or not is determined by the following rules −
	// Is the year divisible by 4?
	// If yes, is it a century year (divisible by 100)?
	// If yes, is it divisible by 400? If yes, 
	//  |- print "A Leap year"
	//  |- Otherwise print "Not a Leap year"
	// If it is divisible by 4 and not a century year, it is a leap year.
	//  |- print  "A Leap year"
	// If it is not divisible by 4, it is not a leap year.
	//  |- print "Not a Leap year"

	unsigned int year, state, div_by_4 = 0, div_by_100 = 0;

	state = scanf(" %d", &year);

	if (state) {
		div_by_4 = ((year % 4) == 0) ? 1 : 0;
		div_by_100 = ((year % 100) == 0) ? 1 : 0;

		if (div_by_4 && div_by_100) {
			if ((year % 400) == 0) {
				printf("A Leap year\n");
			} else {
				printf("Not a Leap year\n");
			}
		} else if (div_by_4 && !div_by_100) {
			printf("A Leap year\n");
		} else {
			printf("Not a Leap year\n");
		}
	}
    
    return 0;
}