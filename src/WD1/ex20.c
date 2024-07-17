#include <stdio.h>

int main() {
    int n = 10;

    n -= (n--) - (--n);

    printf ("n = %d\n", n);

    return 0;
}