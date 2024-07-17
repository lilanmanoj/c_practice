#include <stdio.h>

int main() {
    const float length = 7.342, width = 5.345;
    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Length of the rectangle is:\t%.3f cm\n" , length);
    printf("Width of the rectangle is:\t%.3f cm\n" , width);
    printf("\n");
    printf("Area of the rectangle is:\t%.3f cm^2\n" , area);
    printf("Perimeter of the rectangle is:\t%.3f cm\n" , perimeter);

    return 0;
}