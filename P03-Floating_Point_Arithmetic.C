// P03-Floating_Point_Arithmetic.C
// Description: Performs basic arithmetic operations (sum, subtraction, product, division) on two floating-point numbers.

#include<stdio.h>

int main(){
    // Declare variables
    float a, b, w, x, y, z;

    // Get user input for the first number
    printf("\nEnter the first number: ");
    scanf("%f", &a);

    // Get user input for the second number
    printf("Enter the second number: ");
    scanf("%f", &b);

    // Calculate sum, subtraction, product, and division
    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;

    // Print results
    printf("The sum is: %f\n", w);
    printf("The subtraction is: %f\n", x);
    printf("The product is: %f\n", y);
    printf("The division is: %f\n", z);

    // Return 0 to indicate successful execution
    return 0;
}
