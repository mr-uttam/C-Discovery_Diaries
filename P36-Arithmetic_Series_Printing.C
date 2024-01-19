// P36-Arithmetic_Series_Printing.C
// Description: Prints an arithmetic series starting from 4 with a common difference of 3.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i), user input (n), and the initial term (a)
    int i, n, a = 4;

    // Get user input for the number of terms
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use a loop to print the arithmetic series
    for(i = 1; i <= n; i++){
        // Print the current term of the series
        printf("%d  ", a);

        // Update the next term in the series using a common difference of 3
        a = a + 3;
    }

    // Return 0 to indicate successful execution
    return 0;
}
