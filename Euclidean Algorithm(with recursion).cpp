#include <stdio.h>

// Function to find the GCD using the Euclidean algorithm
int euclidean(int a, int b) {
    if (b == 0)
        return a;
    else
        return euclidean(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display the GCD
    int gcd = euclidean(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}

