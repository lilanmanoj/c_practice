#include <stdio.h>

#define FACTOR 1.8
#define ADD 32

int main()
{
    float tempC = 30.0;

    printf ("Enter temperature in Celsius: ");
    scanf ("%f", &tempC);

    float tempF = (tempC * FACTOR) + ADD;

    printf("Temperature in Celsius is: \t%.2f\n" , tempC);
    printf("Temperature in Fahrenheit is: \t%.2f\n" , tempF);

    return 0;
}