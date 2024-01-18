// P27-Even_Odd_Check_Ternary.C
// Description: Checks whether a given number is even or odd using the ternary operator.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use ternary operator to check if the number is even or odd
    n % 2 == 0 ? printf("The number is even") : printf("The number is odd");

    // Return 0 to indicate successful execution
    return 0;
}
