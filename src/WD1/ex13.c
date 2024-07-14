#include <stdio.h>

int main()
{
    int number;
    char letter;
    float pi;
    long double value;

    number = 0;
    letter = 'a';
    pi = 3.14;
    value = 1.2345678900;

    printf("number :\t%d\n" , number);
    printf("letter :\t%c\n" , letter);
    printf("pi :\t\t%.2f\n" , pi);
    printf("value :\t\t%.10Lf\n" , value);

    return 0;
}