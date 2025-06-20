#include <stdio.h>

int main()
{
    int a = 10;
    int *p; // value at that address
    p = &a; // adress
    printf("%d\n", p);
    printf("%d\n", *p); //value at that address
    printf("%d\n", p + 1);
    printf("%d\n", *(p + 1));

    // printf("%d\n", p + 2);
    // printf("%d\n", &a);
    // *p = 12;
    // int b = 20;
    // *p = b;
    // printf("%d\n", a);
    // printf("%d\n", p);

    return 0;
}