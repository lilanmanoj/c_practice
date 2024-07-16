#include <stdio.h>

int main()
{
    float length = 12.0;
    float width = 5.0;
    float area = length * width;

    printf("Length of the rectangle is: \t%.2f\n" , length);
    printf("Width of the rectangle is: \t%.2f\n" , width);
    printf("Area of the rectangle is: \t%.2f\n" , area);

    return 0;
}