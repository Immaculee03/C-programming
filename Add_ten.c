
#include <stdio.h>

int main() {
    int number, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Add 10 to the entered number
    result = number + 10;

    // Print the result
    printf("The result after adding 10 to your number is: %d\n", result);

    return 0;
}
