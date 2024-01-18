// P20-Triangle_Validity_Check.C
// Description: Checks the validity of a triangle based on the lengths of its three sides.

#include<stdio.h>

int main(){
    // Declare variables for three sides of the triangle (a, b, c)
    int a, b, c;

    // Get user input for three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    // Check the conditions for the validity of a triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid triangle");
    }
    else {
        printf("Invalid triangle");
    }

    // Return 0 to indicate successful execution
    return 0;
}
