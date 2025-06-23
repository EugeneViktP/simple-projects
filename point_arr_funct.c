#include <stdio.h>

int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    // int size = sizeof(A)/sizeof(A[0]);
    // printf("Size of A = %d, and size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;

}

int main(void)
{
    int A[] = {1, 2, 3, 4, 5};
    
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("Size of A = %d, and size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    // printf("%d\n", size);
    printf("%d\n", total);
    
    return 0;
}