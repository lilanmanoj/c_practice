#include <stdio.h>

int main() {
    //Write a program to print the following pattern indicated below
	//when row = 4 the following patern should be printed.
	//
	//x
	//xx
	//xxx
	//xxxx
	//
	//Assumptions: get the number of rows(>=1 intigers) from the use as user-inputs.
	//
    
    int x,rows,cols = 0;

    scanf("%d", &rows);

    if (rows > 0) {
        for (rows; rows > 0; rows--) {
            cols++;

            for (x = cols; x > 0; x--) {
                printf("X");
            }

            printf("\n");
        }
    }

    return 0;
}