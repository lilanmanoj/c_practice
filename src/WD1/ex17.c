#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;

    printf("Value of a (befor swap): \t%d\n" , a);
    printf("Value of b (befor swap): \t%d\n" , b);

    c = a;
    a = b;
    b = c;

    printf("Value of a (after swap): \t%d\n" , a);
    printf("Value of b (after swap): \t%d\n" , b);

    return 0;
}