// P19-Greater_Number.C
// Description: Determines the greater number among three random input numbers.

#include<stdio.h>

int main(){
    // Declare variables for three random numbers (a, b, c)
    int a, b, c;

    // Get user input for three random numbers
    printf("Enter three random numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Check conditions to find the greater number
    if (a > b && a > c) {
        printf("The greater number is %d", a);
    }
    else if (b > a && b > c) {
        printf("The greater number is %d", b);
    }
    else {
        printf("The greater number is %d", c);
    }

    // Return 0 to indicate successful execution
    return 0;
}
