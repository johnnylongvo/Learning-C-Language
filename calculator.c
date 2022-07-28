#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operation ( + - * / ): ");
    scanf("%c", &operator); // %c for character: stores operator

    printf("Enter Number 1: ");
    scanf("%lf", &num1); // %lf for doubles: stores num1

    printf("Enter Number 2: ");
    scanf("%lf", &num2); // %lf for doubles: stores num1

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;  
        case '/':
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid Operator!: %c \n", operator);
    }

    return 0;
}