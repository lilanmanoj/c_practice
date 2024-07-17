#include <stdio.h>

int main() {
    const int num = 85314;
    
    const int d1 = num / 10000;
    const int remD1 = num % 10000;
    
    const int d2 = remD1 / 1000;
    const int remD2 = remD1 % 1000;

    const int d3 = remD2 / 100;
    const int remD3 = remD2 % 100;

    const int d4 = remD3 / 10;
    const int d5 = remD3 % 10;

    printf("Five digit number is: %d\n", num);
    printf("%d + %d + %d + %d + %d = ", d1,d2,d3,d4,d5);
    printf("%d\n", d1 + d2 + d3 + d4 + d5);

    return 0;
}