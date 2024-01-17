// P13-Leap_Year_Check.C
// Description: Checks whether a given year is a leap year or not.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for the year
    printf("Enter the year: ");
    scanf("%d", &n);

    // Check if the year is divisible by 4 (leap year condition)
    if (n % 4 == 0) {
        // If divisible by 4, it is a leap year
        printf("%d is a leap year", n);
    } else {
        // If not divisible by 4, it is not a leap year
        printf("%d is not a leap year", n);
    }

    // Return 0 to indicate successful execution
    return 0;
}
