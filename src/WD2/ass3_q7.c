#include <stdio.h>

int main() {
    //Write a program to print the following pattern indicated below
	//when row = 4 the following patern should be printed.
	//
	//   x
	//  xxx
	// xxxxx
	//xxxxxxx
	//
	//Assumptions: get the number of rows (>= 1 intigers) from the use as user-inputs.
	//
    
    int rows,row,wss,ws,xs,x;

    scanf("%d", &rows);

    if (rows > 0) {
        wss = rows - 1;

        for (row = 1; row <= rows; row++) {
            xs = 2 * row - 1;

            for (ws = 1; ws <= wss; ws++) {
                printf(" ");
            }

            for (x = 1; x <= xs; x++) {
                printf("X");
            }

            printf("\n");

            wss--;
        }
    }

    return 0;
}