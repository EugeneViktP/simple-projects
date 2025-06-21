#include <stdio.h>

int main()
{
    int a = 1025;
    int *p; // value at that address
    p = &a; // adress
    printf("size of intiger is %d bytes\n", sizeof(int));
    printf("address = %p, value = %d\n", p, *p);
    // printf("address = %d, value = %d\n", p+1, *(p+1));
    // char *p0;
    // p0 = (char*)p;
    // printf("size of char is %d\n", sizeof(char));
    // printf("address = %d, value = %d\n", p0, *p0);
    // printf("address = %d, value = %d\n", p0+1, *(p0+1));
    //00000000 00000000 00000100 00000001

    void *p0;
    p0 = p;
    printf("address = %d\n", p0);
    printf("address = %d\n", p0+1);



    return 0;
}