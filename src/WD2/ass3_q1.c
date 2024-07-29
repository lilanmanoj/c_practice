#include <stdio.h>

int main() {
    // Complete the program to print the maximum value of 2 entered numbers. 
    // Assume all the values given as inputs are floating point numbers.
    // Make sure to only print the maximum value.
    float num1,num2;

    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("%f", num1);
    } else {
        printf("%f", num2);
    }

    return 0;
}