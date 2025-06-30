#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{
    printf("address of a in Add = %d\n", &a);
    int c = a + b;
    return c;
}

int main(void)
{
    int a = 2, b = 4;
    printf("address of a in main = %d\n", &a);
    int c = Add(a, b); // value in x of main is copied to a of Add
    printf("Sum = %d\n", c);
}