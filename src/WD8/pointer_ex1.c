#include <stdio.h>

int main()
{
    int m = 0, n = 0;
    int *pointer_m = &m, *pointer_n = &n;

    printf("Initial value of m: %d\n", m);
    printf("Initial value of n: %d\n", n);

    printf("\nInitialized pointers for n and m:-\n");
    printf("Value of pointer_m: %d\n", *pointer_m);
    printf("Value of pointer_n: %d\n", *pointer_n);

    *pointer_m = 1;
    *pointer_n = 2;

    printf("\nAfter modified m and n using their pointers:-\n");
    printf("Value of m: %d\n", m);
    printf("Value of n: %d\n", n);

    printf("\nPointer values after the above modification for n and m:-\n");
    printf("Value of pointer_m: %d\n", *pointer_m);
    printf("Value of pointer_n: %d\n", *pointer_n);

    m = 3;
    n = 4;

    printf("\nPointer values after directly assign values to n and m:-\n");
    printf("Value of pointer_m: %d\n", *pointer_m);
    printf("Value of pointer_n: %d\n", *pointer_n);

    return 0;
}