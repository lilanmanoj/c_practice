#include <stdio.h>

int main()
{
    int num = 85314;
    
    int d1 = num / 10000;
    int remD1 = num % 10000;
    
    int d2 = remD1 / 1000;
    int remD2 = remD1 % 1000;

    int d3 = remD2 / 100;
    int remD3 = remD2 % 100;

    int d4 = remD3 / 10;
    int d5 = remD3 % 10;

    printf("%d + %d + %d + %d + %d =\t", d1,d2,d3,d4,d5);
    printf("%d\n", d1 + d2 + d3 + d4 + d5);

    return 0;
}