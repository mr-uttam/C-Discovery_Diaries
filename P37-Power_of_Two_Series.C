// P37-Power_of_Two_Series.C
// Description: Prints a series of powers of two up to a user-input limit.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i), user input (n), and the initial term (a)
    long long int i, n, a = 1;

    // Get user input for the number of terms
    printf("Enter a number: ");
    scanf("%lld", &n);

    // Use a loop to print the series of powers of two
    for(i = 1; i <= n; i++){
        // Print the current term of the series
        printf("%lld   ", a);

        // Update the next term in the series by multiplying the previous term by 2
        a = a * 2;
    }

    // Return 0 to indicate successful execution
    return 0;
}
