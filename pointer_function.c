#include <stdio.h>

int Increment(int a) //copy of a - local variable
{
    // a = a + 1;
    // printf("Address of variable a in increment = %d\n", &a);
    return a + 1;
}

int main(void)
{
    int a;
    a = 10;
    // Increment(a);
    a = Increment(a);
    printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);
    return 0;
}