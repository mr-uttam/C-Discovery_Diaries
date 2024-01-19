// P34-Multiplication_Table.C
// Description: Prints the multiplication table for a user-input number (n) up to 10.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i), user input (n), and the product (m)
    int i, n, m;

    // Get user input for the number
    printf("Enter number: ");
    scanf("%d", &n);

    // Use a loop to print the multiplication table for the number up to 10
    for(i = 1; i <= 10; i++){
        // Calculate the product and print the equation
        m = n * i;
        printf("%d * %d = %d\n", n, i, m);
    }

    // Return 0 to indicate successful execution
    return 0;
}
