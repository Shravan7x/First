#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user to enter two integers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum of two numbers
    sum = num1 + num2;

    // Display the sum
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
