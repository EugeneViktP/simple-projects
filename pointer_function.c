#include <stdio.h>

void Increment(int *p) // address of an intiger
{
    *p = (*p) + 1; // increase integer value by address
}

int main(void)
{
    int a;
    a = 10;
    Increment(&a); // pass variable's a address to function
    printf("a = %d\n", a);
    return 0;
}