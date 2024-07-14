#include <stdio.h>

int main()
{
    float pi = 22/7;
    float radius = 5.0;
    float area = pi * radius * radius;

    printf("Radius of the circle is: \t%.2f\n" , radius);
    printf("Area of the circle is: \t\t%.2f\n" , area);

    return 0;
}