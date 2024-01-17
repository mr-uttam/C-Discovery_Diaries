// P09-Remainder.C
// Description: Calculates the remainder when the first number is divided by the second number.

#include<stdio.h>

int main(){
    // Declare variables for the first number (a), second number (b), and remainder (Remainder)
    int a, b, Remainder;

    // Get user input for the first number
    printf("Enter the 1st number: ");
    scanf("%d", &a);

    // Get user input for the second number
    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    // Calculate the remainder when a is divided by b
    Remainder = a % b;

    // Print the remainder
    printf("The remainder is: %d", Remainder);

    // Return 0 to indicate successful execution
    return 0;
}
