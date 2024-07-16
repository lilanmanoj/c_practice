#include <stdio.h>

int main()
{
    float tempC = 30.0;
    float factor = 1.8;
    float tempF = (tempC * factor) + 32;

    printf("Temperature in Celsius is: \t%.2f\n" , tempC);
    printf("Temperature in Fahrenheit is: \t%.2f\n" , tempF);

    return 0;
}