#include <stdio.h>

int main()
{
    int n = 10;
    printf("n = %d\n\n", n);
    
    int a = n--;
    printf("a = n-- = %d\n", a);
    printf("n = %d\n\n", n);

    int b = --n;
    printf("b = --n = %d\n", b);
    printf("n = %d\n\n", n);

    n = 10;
    int c = a - b;
    int d = (n--) - (--n);
    printf("a - b = %d\n", c);
    printf("(n--) - (--n) = %d\n\n", d);

    n -= c;
    printf ("n -= (n--) - (--n) = %d\n", n);

    return 0;
}