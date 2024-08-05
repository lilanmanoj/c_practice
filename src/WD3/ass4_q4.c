#include <stdio.h>

int main(){
	// Write a program to count the number of Males and Females
	// Program structure should be as follows
	// Example program outputs
	// 
	// Enter no of students:5
	// >M
	// >F
	// >F
	// >M
	// >M
	// Males:3
	// Females:2
	//
	//If there is an incorrect user-input skip that and retry 
	//DONOT Print any error messages
	//consider valid inputs to be any of the following f/F/M/m

    unsigned int i, students, state, males = 0, females = 0;
	char gender;

    printf("Enter no of students:");
    state = scanf(" %d", &students);
    
	if (state) {
		for (i = 0; i < students; i++) {
			while (1) {
				state = scanf(" %c", &gender);

				if (state && (gender == 'F' || gender == 'f')) {
					females += 1;
					break;
				}

				if (state && (gender == 'M' || gender == 'm')) {
					males += 1;
					break;
				}
			}
		}
	}

    printf("Males:%d\n", males);
    printf("Females:%d\n", females);

    return 0;
}