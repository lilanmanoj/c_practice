#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("Value of a (befor swap):\t%d\n" , a);
    printf("Value of b (befor swap):\t%d\n\n" , b);

    // a = bin(01010), b = bin(10100)
    a = a ^ b; // a = a XOR b = bin(11110) = dec(30)
    b = a ^ b; // b = a XOR b = bin(01010) = dec(10)
    a = a ^ b; // a = a XOR b = bin(10100) = dec(20)

    printf("Value of a (after swap):\t%d\n" , a);
    printf("Value of b (after swap):\t%d\n" , b);

    return 0;
}