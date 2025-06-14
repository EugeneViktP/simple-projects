#include <stdio.h>

void sayHi(char name[]) {
    printf("Hello %s", name);
}

int main(void)
{
    char name[20];
    printf("Say your name: ");
    scanf("%s", name);
    sayHi(name);
    return 0;
}