#include <stdio.h>

#define FACTOR 1.8
#define ADD 32

int main() {
    const int add = 32;
    const float factor = 1.8;
    float tempC, tempF;

    printf("Enter temperature in Celsius:\t");
    scanf("%f", &tempC);

    tempF = (tempC * factor) + (float) add;

    printf("Temperature in Celsius is:\t%.2f\n" , tempC);
    printf("Temperature in Fahrenheit is:\t%.2f\n" , tempF);

    return 0;
}