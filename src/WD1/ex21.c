#include <stdio.h>

int main()
{
    int a = 3,b,c;
    b = 2 * (a++);
    c = 2 * (++a);

    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}