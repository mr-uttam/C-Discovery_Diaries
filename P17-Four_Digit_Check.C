// P17-Four_Digit_Check.C
// Description: Checks whether a given number is a four-digit number or not.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is between 1000 and 9999 (inclusive)
    if (n > 999 && n < 10000) {
        // If true, it is a four-digit number
        printf("It is a four-digit number");
    } else {
        // If false, it is not a four-digit number
        printf("It is not a four-digit number");
    }

    // Return 0 to indicate successful execution
    return 0;
}
