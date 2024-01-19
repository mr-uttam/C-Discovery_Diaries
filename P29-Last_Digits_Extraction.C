// P29-Last_Digits_Extraction.C
// Description: Extracts the last digit, last two digits, and last three digits of a given number.

#include<stdio.h>

int main(){
    // Declare variable for user input (x)
    int x;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%d", &x);

    // Extract and print the last digit of the number
    int y = x % 10;
    printf("Last digit of the number is %d", y);

    // Extract and print the last two digits of the number
    int z = x % 100;
    printf("\nLast two digits of the number is %d", z);

    // Extract and print the last three digits of the number
    int w = x % 1000;
    printf("\nLast three digits of the number is %d", w);

    // Return 0 to indicate successful execution
    return 0;
}
