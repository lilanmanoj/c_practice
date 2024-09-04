#include <stdio.h>

void change_value(int *n);

int main()
{
    int n = 0;

    change_value(&n);
    printf("n = %d\n", n);

    return 0;
}

void change_value(int *n)
{
    *n = 2;
}