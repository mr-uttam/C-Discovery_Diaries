// P40-Odd_Numbers_Using_Continue.C
// Description: Prints odd numbers up to a given number using the 'continue' statement.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i) and user input (n)
    int i, n;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use a loop to print odd numbers up to the given number using 'continue'
    for(i = 1; i <= n; i++){
        // Skip even numbers using 'continue'
        if(i % 2 == 0){
            continue;
        }

        // Print the current odd number
        printf("%d  ", i);
    }

    // Return 0 to indicate successful execution
    return 0;
}
