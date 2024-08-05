#include <stdio.h>

int main(){
    // write a program to input any integer and determine if the number is divisible by 2 and 3, divisible by 2 but not 3, divisible by 3 but not 2, and not divisible by both 2 and 3.
    // outputs should be as below.
    // Divisible by 3 but not 2
    // Divisible by 2 but not 3
    // Divisible by both 2 and 3
    // Not divisible by both 2 and 3
    
    int num;
    int can_div_2 = 0;
    int can_div_3 = 0;

    scanf("%d", &num);

    if (num % 2 == 0) can_div_2 = 1;
    if (num % 3 == 0) can_div_3 = 1;

    if (can_div_2 && can_div_3) {
        printf("Divisible by both 2 and 3\n");
    } else if (can_div_2 && !can_div_3) {
        printf("Divisible by 2 but not 3\n");
    } else if (!can_div_2 && can_div_3) {
        printf("Divisible by 3 but not 2\n");
    } else {
        printf("Not divisible by both 2 and 3\n");
    }
    
    return 0;
}