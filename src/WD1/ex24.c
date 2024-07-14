#include <stdio.h>

int main()
{
    float length,width,area;

    printf ("Enter length: ");
    scanf ("%f", &length);

    printf ("Enter width: ");
    scanf ("%f", &width);

    area = length * width;

    printf("\n");
    printf("Length of the rectangle is: \t%.2f\n" , length);
    printf("Width of the rectangle is: \t%.2f\n" , width);
    printf("Area of the rectangle is: \t%.2f\n" , area);

    return 0;
}