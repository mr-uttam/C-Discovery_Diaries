// P26-Even_Odd_Check.C
// Description: Checks whether a given number is even or odd.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is even or odd
    if (n % 2 == 0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }

    // Return 0 to indicate successful execution
    return 0;
}
