// P24-Greatest_Number_Three.C
// Description: Finds the greatest number among three random input numbers.

#include<stdio.h>

int main(){
    // Declare variables for three random numbers (a, b, c)
    int a, b, c;

    // Get user input for three random numbers
    printf("Enter three random numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Nested if-else statements to find the greatest number
    if (a > b) {
        if (a > c) {
            printf("%d is the greatest number", a);
        }
        else {
            printf("%d is the greatest number", c);
        }
    }
    else {
        if (b > c) {
            printf("%d is the greatest number", b);
        }
        else {
            printf("%d is the greatest number", c);
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
