// P02-Arithmetic_Operations.C
// Description: Performs basic arithmetic operations (sum, subtraction, product, division) on two integers.

#include<stdio.h>

int main(){
    // Declare variables
    int a, b, w, x, y, z;

    // Assign values to variables
    a = 50;
    b = 30;

    // Calculate sum, subtraction, product, and division
    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;

    // Print results
    printf("Sum: %d\n", w);
    printf("Subtraction: %d\n", x);
    printf("Product: %d\n", y);
    printf("Division: %d\n", z);

    // Return 0 to indicate successful execution
    return 0;
}
