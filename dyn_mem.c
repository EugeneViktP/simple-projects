#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);

    // int A[n];
    int *A = (int*)malloc(n*sizeof(int)); //dynamically allocated array
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    // free(A);
    // A[2] = 77;

    // A = NULL;

    int *B = realloc(A, (n/2)*sizeof(int));

    printf("Prev block adress = %d, new address = %d\n", A, B);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", B[i]);
    }
    // free(A);


    
    return 0;
}