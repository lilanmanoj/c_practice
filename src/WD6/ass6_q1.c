#include <stdio.h>

char getGrade(unsigned int marks)
{
    if (marks >= 0 && marks < 40) {
        return 'F';
    } else if (marks >= 40 && marks < 50) {
        return 'D';
    } else if (marks >= 50 && marks < 65) {
        return 'C';
    } else if (marks >= 65 && marks < 80) {
        return 'B';
    } else if (marks >= 80 && marks <= 100 ) {
        return 'A';
    }

    return 'E';
}

int main()
{
    unsigned int marks, state;
    char grade;

    printf("Enter marks: ");
    state = scanf(" %u", &marks);

    if (state) {
        grade = getGrade(marks);

        if (grade == 'E') {
            printf("Invalid Marks\n");
        } else {
            printf("Grade: %c\n", grade);
        }
    } else {
        printf("Invalid Marks\n");
    }

    return 0;
}