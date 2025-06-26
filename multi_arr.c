#include <stdio.h>

int main(void)
{
    int A[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*p)[3] = A;
    printf("%d\n", (*(p + 1) + 1));
    printf("%d\n", *(*(p + 1) + 1));
    
    printf("%d\n", (*(p + 1) + 2));
    printf("%d\n", *(*(p + 1) + 2));
    
    return 0;
}