#include <stdio.h>

int main()
{
    float length = 7.342;
    float width = 5.345;
    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Length of the rectangle is: \t%f cm\n" , length);
    printf("Width of the rectangle is: \t%f cm\n" , width);
    printf("\n");
    printf("Area of the rectangle is: \t%f cm^2\n" , area);
    printf("Perimeter of the rectangle is: \t%f cm\n" , perimeter);

    return 0;
}