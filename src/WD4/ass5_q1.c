#include <stdio.h>

int main(){
    //Write a program to get 10 floating-point numbers from the user, 
    //and find the minimum, the maximum, and the average of the given set of numbers. 
    //The program should first store the  numbers in an array. 
    //Then the maximum, minimum, and the average should be determined by iterating (looping) through the array. 
    //The results should be displayed with two decimal places.


    // Input:-
    // 1.587
    // 10.8381
    // 9.3
    // -5.83
    // 20.5
    
    // Output:-
    // maximum = 20.5
    // minimum = -5.83
    // average = 7.28

    unsigned int i;
    float num[5], max, min, sum = 0, avg = 0;

    for (i = 0; i < 5; i++) {
        scanf(" %f", &num[i]);
    }

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            max,min = num[i];
        } else {
            if (num[i] > max) {
                max = num[i];
            }

            if (num[i] < min) {
                min = num[i];
            }
        }

        sum = sum + num[i];
    }

    avg = sum/5.0;

    printf("maximum = %.2f\n", max);
    printf("minimum = %.2f\n", min);
    printf("average = %.2f\n", avg);

    return 0;
}