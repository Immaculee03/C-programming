#include <stdio.h>

int main() {
    // Declare two variables to store the numbers
    int num1, num2, sum;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Add the numbers
    sum = num1 + num2;

    // Display the result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
