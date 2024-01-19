// P38-Decrement_Series.C
// Description: Prints a series by decrementing a number in steps of 3 for a specified number of times.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i), user input (a), and the number of times to print (n)
    int i, a, n;

    // Get user input for the initial number and the required number of times
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Enter required times: ");
    scanf("%d", &n);

    // Use a loop to print the series by decrementing the number in steps of 3
    for(i = 1; a > 0; i++){
        // Check if the current step is within the required number of times
        if (i <= n){
            // Print the current value of the number
            printf("%d  ", a);
        }

        // Decrement the number by 3
        a = a - 3;
    }

    // Return 0 to indicate successful execution
    return 0;
}
