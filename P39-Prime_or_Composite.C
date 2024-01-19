// P39-Prime_or_Composite.C
// Description: Checks whether a given number is prime or composite.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i), user input (n), and a flag for prime (a)
    int i, n, a = 0;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use a loop to check for factors of the number
    for(i = 2; i <= n - 1; i++){
        // If a factor is found, set the flag to indicate the number is composite
        if(n % i == 0){
            a = 1;
            break;
        }
    }

    // Check the flag to determine whether the number is prime or composite
    if(a == 0){
        printf("The number is prime");
    }
    else{
        printf("The number is composite");
    }

    // Return 0 to indicate successful execution
    return 0;
}
