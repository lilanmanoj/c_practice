#include <stdio.h>

#define PI 22.0/7

int main()
{
    float radius;

    printf ("Enter radius: ");
    scanf ("%f", &radius);

    float area = PI * radius * radius;

    printf("Radius of the circle is: \t%.2f\n" , radius);
    printf("Area of the circle is: \t\t%.2f\n" , area);

    return 0;
}