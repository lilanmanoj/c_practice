#include <stdio.h>

int main() {
    // Write a program to indicate if a user entered integer is odd or even.
    // Print "odd" for an odd integer.
    // Print "even" for an even integer (note that 0 is also considered to be an even number).
    // Do not Print unwanted stuff in your final submission.
    int num, mod;

    scanf("%d", &num);

    mod = num % 2;

    if (mod == 0) {
        printf("even");
    } else {
        printf("odd");
    }

    return 0;
}