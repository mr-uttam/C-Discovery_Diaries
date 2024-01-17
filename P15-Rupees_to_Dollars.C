// P15-Rupees_to_Dollars.C
// Description: Converts Rupees to Dollars using a fixed conversion rate.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for the amount in Rupees
    printf("Enter Rupees: ");
    scanf("%d", &n);

    // Convert Rupees to Dollars using a fixed conversion rate (83 Rupees = 1 Dollar)
    int dollars = n * 83;

    // Print the conversion result
    printf("%d Rupees = %d Dollar", n, dollars);

    // Return 0 to indicate successful execution
    return 0;
}
