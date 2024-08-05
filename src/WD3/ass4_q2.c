#include <stdio.h>

int main(){
	// Write a program to get N numbers from the user and find 
	// the minimum and the maximum in the given set of numbers
	// Assume: No user errors are occuring in the inputs
	// 	 : Inputs are floating point numbers
	// 	 : display the results only for two decimal places
	//Example program output should be as follows,
	//
	//Enter N:4
	//6.00
	//7.8906
	//6
	//5
	//Min:5.00
	//Max:7.89
	//

    int i,n;
    float num,max,min;

    printf("Enter N:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num);

        if (i == 0) {
            max = num;
            min = num;
        } else {
            if (num > max) {
                max = num;
            }

            if (num < min) {
                min = num;
            }
        }
    }

    printf("Min:%.2f\n", min);
    printf("Max:%.2f\n", max);
	
	return 0;
}