#include <stdio.h>

int main(){
    // Write a program user to enter physics and maths marks.
    // check the average is more than or equal 50.
    // the student should have secured more than 35 marks in both the subjects to pass
    // Then Print avaerage value and "Pass" or "Fail".
    float marks_math, mark_phys;

    scanf("%f", &marks_math);
    scanf("%f", &mark_phys);

    float avg = (marks_math + mark_phys) / 2;

    printf("avg- %d\n", (int) avg);

    if (avg >= 50 && marks_math > 35 && mark_phys > 35) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    
    return 0;
}