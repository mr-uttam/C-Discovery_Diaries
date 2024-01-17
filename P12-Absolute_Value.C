// P12-Absolute_Value.C
// Description: Calculates the absolute value of a given number.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        // If negative, calculate and print the absolute value
        printf("The absolute value is %d", n = n * (-1));
    } else {
        // If non-negative, simply print the number
        printf("%d", n);
    }

    // Return 0 to indicate successful execution
    return 0;
}
