#include <stdio.h>

int main(void)
{
    int A[] = {2, 4, 6, 7, 1};
    int i;
    
    printf("%d\n", A);
    printf("%d\n", &A[0]);
    printf("%d\n", A[0]);
    printf("%d\n", *A);

    for (i = 0; i < 5; i++) {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A + i));
    }
    
    return 0;
}