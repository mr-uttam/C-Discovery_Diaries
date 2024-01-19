// P30-Hello_World_Repeated.C
// Description: Prints "Hello World" multiple times based on user input.

#include<stdio.h>

int main(){
    // Declare variables for loop control (i) and user input (x)
    int i, x;

    // Get user input for the number of times to repeat "Hello World"
    printf("Enter the number: ");
    scanf("%d", &x);

    // Use a loop to print "Hello World" x times
    for(i = 1; i <= x; i++){
        printf("Hello World\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
