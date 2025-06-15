#include <stdio.h>


double cube(double num) {
    double result = num * num * num;
    return result;
    printf("Here");
}

int main(void)
{
    printf("Answer: %f", cube(3.0));
    return 0;
}