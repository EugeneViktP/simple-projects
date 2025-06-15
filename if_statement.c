#include <stdio.h>

int max(int num1, int num2, int num3) {
    int result = num1;
    if (num2 > result) {
        result = num2;
    }
    if (num3 > result) {
        result = num3;
    }
  
    return result;
}

int main(void)
{
    printf("%d", max(13, 10, 92));
    return 0;
}