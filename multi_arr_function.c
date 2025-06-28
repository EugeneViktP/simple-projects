#include <stdio.h>

int main(void)
{
     int A[3][2][2] = {
    
        {
        {76, 2},
        {3, 4},
    },
    {
        {5, 6},
        {7, 8},
    },
    {
        {9, 10},
        {11, 12},
    }
    };

    int (*p)[2][2] = A;

    printf("%d\n", A); //pointer to the first element of the first array
    printf("%d\n", *A);
    printf("%d\n", A[0]);
    printf("%d\n", *A[0][1]);
    printf("This address %d\n", *(p + 1));
    printf("This address %d\n", *p + 1);
    printf("This address %d\n", *(*p) + 1);
    printf("This address %d\n", **(*p) + 1);
    printf("This address %d\n", *(A[0][1] + 1));
    printf("This address %d\n", *(A[1] + 1));

    // printf("Value or pointer = %d\n", (*(p + 1) + 1)); //Арифметика указателей
    // printf("%d\n", *(*(p + 1) + 1));
    
    // printf("%d\n", (*(p + 1) + 2));
    // printf("%d\n", *(*(p + 1) + 2));
    return 0;
}