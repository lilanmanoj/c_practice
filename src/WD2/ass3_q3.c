#include <stdio.h>

int main() {
    // Write a C program that prints the letter grade when marks obtained is entered through the keyboard.
    int mark;

    scanf("%d", &mark);

    if (mark >= 0 && mark < 40) {
        printf("F");
    } else if (mark >= 40 && mark < 50) {
        printf("D");
    } else if (mark >= 50 && mark < 60) {
        printf("C");
    } else if (mark >= 60 && mark < 70) {
        printf("B");
    } else if (mark >= 70 && mark <= 100) {
        printf("A");
    } else {
        printf("Invalid Marks");
    }

    return 0;
}