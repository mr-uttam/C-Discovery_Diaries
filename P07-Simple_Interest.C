// P07-Simple_Interest.C
// Description: Calculates simple interest based on principal amount, rate, and time.

#include<stdio.h>

int main(){
    // Declare variables for principal amount (p), rate (r), time (t), and simple interest (I)
    float p, r, t, I;

    // Get user input for principal amount, rate, and time
    printf("Enter the principal amount (p): ");
    scanf("%f", &p);
    printf("Enter the rate (r): ");
    scanf("%f", &r);
    printf("Enter the time (t): ");
    scanf("%f", &t);

    // Calculate simple interest using the formula: I = (p * r * t) / 100
    I = (p * r * t) / 100;

    // Print the calculated simple interest
    printf("Simple interest: %f", I);

    // Return 0 to indicate successful execution
    return 0;
}
