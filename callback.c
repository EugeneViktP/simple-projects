#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
    int A = *((int*)a); // typecasting to int* and getting value
    int B = *((int*)b);
    return A-B;
}

int main(void)
{

    int i, A[] = {-30, -40, 50, -6, -1, 4}; // sort in increasing order
    qsort(A, 6, sizeof(int), compare );
    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}