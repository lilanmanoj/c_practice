#include <stdio.h>

int main() {
    const float tempC = 32.0, factor = 1.8;
    const int add = 32;
    const float tempF = (tempC * factor) + add;

    printf("Temperature in Celsius is: \t%.2f\n" , tempC);
    printf("Temperature in Fahrenheit is: \t%.2f\n" , tempF);

    return 0;
}