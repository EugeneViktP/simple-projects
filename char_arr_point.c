#include <stdio.h>
#include <string.h>

int main(void) 
{
    char C[20];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int len = strlen(C);
    printf("%s\n", C);
    printf("%d\n", len);
    
    return 0;
}