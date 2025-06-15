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

    if (op == '+' || op == '-' || op == '*' || op == '/') {

        printf("Enter a number: ");
        scanf("%lf", &num2);
        switch(op) {
            case '+':
            printf("Sum: %f", num1 + num2);
            break;
            case '-':
            printf("Diff: %f", num1 - num2);
            break;
            case '*':
            printf("Product: %f", num1 * num2);
            break;
            case '/':
            printf("Quotient: %f", num1 / num2);
            break;
        }
    } else {
        printf("Not supported op");
    }

    
    return 0;
}