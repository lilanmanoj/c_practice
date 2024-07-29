#include <stdio.h>

int main() {
    //Write a program to print a box pattern indicated below
	//when row = 4 the following patern should be printed.
	//
	//xxxx
	//xxx
	//xx
	//x
	//
	//Assumptions: get the number of rows (>= 1 intigers) from the use as user-inputs.
	//
    
    int x,rows,cols;

    scanf("%d", &rows);

    if (rows > 0) {
        cols = rows;

        for (rows; rows > 0; rows--) {
            for (x = cols; x > 0; x--) {
                printf("X");
            }

            printf("\n");

            cols--;
        }
    }

    return 0;
}