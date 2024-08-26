#include <stdio.h>

int getFactorial(unsigned int x)
{
    return (x == 0) ? 1 : x * getFactorial(x - 1);
}

int main()
{
    unsigned int x, factorial, state;

    printf("Enter number: ");
    state = scanf(" %u", &x);

    if (state) {
        factorial = getFactorial(x);

        printf("Factorial: %u\n", factorial);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}