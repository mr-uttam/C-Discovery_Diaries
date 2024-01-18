// P18-Divisibility_Check.C
// Description: Checks the divisibility of a given number by 5 and 3.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is divisible by both 5 and 3
    if (n % 5 == 0 && n % 3 == 0) {
        printf("This number is divisible by 5 and 3");
    }
    // Check if the number is not divisible by both 5 and 3
    else if (n % 5 != 0 && n % 3 != 0) {
        printf("This number is not divisible by 5 and 3");
    }
    // Check if the number is divisible by 3 but not by 5
    else if (n % 5 != 0 && n % 3 == 0) {
        printf("This number is divisible by 3 but not divisible by 5");
    }
    // Check if the number is divisible by 5 but not by 3
    else {
        printf("This number is divisible by 5 but not divisible by 3");
    }

    // Return 0 to indicate successful execution
    return 0;
}
