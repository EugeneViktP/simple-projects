#include <stdio.h>

int max(int num1, int num2, int num3) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    if (result > num3) {
        return result;
    } else {
        result = num3;
    }
    return result;
}

int main(void)
{
    printf("%d", max(4, 10, 8));
    return 0;
}