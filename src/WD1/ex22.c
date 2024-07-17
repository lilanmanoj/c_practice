#include <stdio.h>

int main() {
    const float pi = 22.0/7;
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Radius of the circle is:\t%.2f\n" , radius);
    printf("Area of the circle is:\t\t%.2f\n" , area);

    return 0;
}