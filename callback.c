#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(int a, int b)
{
    if (a > b) 
    {
        return -1;
    } else 
    {
        return 1;
    }
}

int absulute_compare(int a, int b)
{
    if (abs(a) > abs(b))
    {
        return 1;
    } else {
        return -1;
    }
    
}

void BubbleSort(int *A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1; j++) {
            if (compare(A[j], A[j + 1]) > 0) {  // compare A[j] with A[j + 1] and SWAP if needed
            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
        }
        }
    }
}

int main(void)
{

    int i, A[] = {-30, -40, 50, -6, -1, 4}; // sort in increasing order
    BubbleSort(A, 6, absulute_compare);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}