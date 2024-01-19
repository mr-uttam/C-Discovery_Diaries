// P28-Assignment_Comparison.C
// Description: Demonstrates variable assignments and comparisons in C.

#include<stdio.h>

int main(){
    // Declare variables x, y, z
    int x = 3, y, z;

    // Perform assignments and comparison
    y = x = 10;  // Assigns 10 to x, then assigns the value of x to y
    z = x < 10;  // Compares if x is less than 10 and assigns the result to z

    // Print the values of x, y, and z
    printf("\nx=%d, y=%d, z=%d", x, y, z);

    // Return 0 to indicate successful execution
    return 0;
}
