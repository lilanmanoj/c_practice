#include <stdio.h>

float calc_to_power(float x, unsigned int n);

int main(){
    //Write a function (using loops) that returns x raised to the power n (i.e., x^n), 
    //when x and n are passed as arguments. 
    //x is a floating-point number and n is an integer. 
    //You may assume that n is non-negative (that is, n is either a positive integer or zero).
    float x;
    unsigned int n;

    scanf(" %f", &x);
    scanf(" %i", &n);

    float value= calc_to_power(x, n);

    printf("%.2f\n", value);

    return 0;
}

float calc_to_power(float x, unsigned int n) {
    float value = 1.0;

    for (int i = 0; i < n; i++) {
        value = value * x;
    }

    return value;
}
