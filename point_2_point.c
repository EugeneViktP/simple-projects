#include <stdio.h>

int main(void)
{
    int x = 5;
    int *p;
    p = &x;
    int **q;
    q = &p;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q));
    **q = 12;
    printf("%d\n", x);
    **q = *p + 12;
    printf("%d\n", x);
    
    
    return 0;
}