#include <stdio.h>
#include <string.h>

void print(char* C)
{
    C[0] = 'A';
    int i = 0;
    while(*C != '\0') 
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main(void) 
{
   char C[20] = "Hello";
   print(C);
    
    return 0;
}