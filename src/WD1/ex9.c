#include <stdio.h>

int main() {
    const float pi = 22.0/7, radius = 5.0;
    const float area = pi * radius * radius;

    printf("Radius of the circle is:\t%.2f\n" , radius);
    printf("Area of the circle is:\t\t%.2f\n" , area);

    return 0;
}