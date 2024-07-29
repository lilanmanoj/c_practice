#include <stdio.h>

int main() {
    //Write a program to print a box pattern indicated below
	//when row = 3 and col = 6 the following patern should be printed.
	//
	//xxxxxx
	//xxxxxx
	//xxxxxx
	//
	//Assumptions: get the number of rows,columns (>=1 intigers) from the use as user-inputs. 
	//  First input rows 
	//  second input columns
    
    int rows,cols,x;

    scanf("%d", &rows);
    scanf("%d", &cols);

    if (rows > 0 && cols > 0) {
        for (rows; rows > 0; rows--) {
            for (x = cols; x > 0; x--) {
                printf("X");
            }

            printf("\n");
        }
    }

    return 0;
}