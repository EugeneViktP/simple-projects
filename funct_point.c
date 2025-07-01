#include <stdio.h>
#include <stdlib.h>

void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    void(*ptr)(char*);
    ptr = PrintHello;
    ptr("Tom");
    
    int c;
    //pointer to function
    int (*p)(int, int);
    p = &Add;
    c = (*p)(2,3);
    printf("%d", c);

    return 0;
}