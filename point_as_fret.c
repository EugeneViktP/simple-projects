#include <stdio.h>
#include <stdlib.h>

int* Add(int* a, int* b) // pointer to integer in called function
{
    printf("address of a in Add = %d\n", a);
    printf("dereferencing = %d\n", *a);
    printf("address of pointer = %d\n", &a);
    int* c =(int*)malloc(sizeof(int));
    printf("address of c pointer = %d\n", c);
    *c = *a + *b;
    return c;
}

int main(void)
{
    int a = 2, b = 4;
    printf("address of a in main = %d\n", &a);
    int* ptr = Add(&a, &b); // value in x of main is copied to a of Add
    printf("Sum = %d, at address = %d", *ptr, ptr);
    free(ptr);
    ptr = NULL;
}