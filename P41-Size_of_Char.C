#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for a character
    printf("Enter a char: ");
    scanf("%c", &n);

    // Display the size of the character variable in bytes
    printf("Size of char: %lu", sizeof(n));

    // Return 0 to indicate successful execution
    return 0;
}
