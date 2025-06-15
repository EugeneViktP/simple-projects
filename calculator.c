#include <stdio.h>

int main(void)
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator:");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("Sum: %f", num1 + num2);
    } else if (op == '-') {
        printf("Diff: %f", num1 - num2);
    } else if (op == '*') {
        printf("Product: %f", num1 * num2);
    } else if (op == '/') {
        printf("Quotient: %f", num1 / num2);
    } else {
        printf("Not supported op");
    }    
    return 0;
}