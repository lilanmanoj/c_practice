#include <stdio.h>

int main()
{
    int a, b, sum;
    int *a_p = &a, *b_p = &b;

    printf("Enter num 1: ");
    scanf("%d", a_p);

    printf("Enter num 2: ");
    scanf("%d", b_p);

    sum = *a_p + *b_p;

    printf("\nSum of num 1 and num 2: %d\n", sum);

    return 0;
}