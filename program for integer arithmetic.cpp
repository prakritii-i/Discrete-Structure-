#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Addition
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);

    // Subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);

    // Multiplication
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    return 0;
}

