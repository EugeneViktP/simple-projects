#include <stdio.h>

void sayHi(char name[], int age) {
    printf("Hello %s your number is %d", name, age);
}

int main(void)
{
    char name[20];
    printf("Say your name: ");
    scanf("%s", name);
    sayHi(name, 20);
    return 0;
}