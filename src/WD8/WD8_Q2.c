#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b, c;
    int *a_p = &a, *b_p = &b;

    printf("Enter num 1: ");
    scanf("%d", a_p);

    printf("Enter num 2: ");
    scanf("%d", b_p);

    printf("\nBefore swapping\n");
    printf("num 1: %d\n", a);
    printf("num 2: %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping\n");
    printf("num 1: %d\n", a);
    printf("num 2: %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}