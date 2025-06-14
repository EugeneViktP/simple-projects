#include <stdio.h>

int main(void)
{
    double num1;
    double num2;
    printf("Enter numbers to be summed up: ");
    scanf("%lf %lf", &num1, &num2);
    printf("The sum of these numbers %f", num1 + num2);

    
    return 0;
}