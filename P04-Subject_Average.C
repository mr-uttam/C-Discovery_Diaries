// P04-Subject_Average.C
// Description: Calculates the average percentage of scores in Bengali, English, Math, Physics, and Chemistry.

#include<stdio.h>

int main(){
    // Declare variables for subject scores and average
    float a, b, c, d, e, sum;

    // Get user input for Bengali score
    printf("Bengali: ");
    scanf("%f", &a);

    // Get user input for English score
    printf("English: ");
    scanf("%f", &b);

    // Get user input for Math score
    printf("Math: ");
    scanf("%f", &c);

    // Get user input for Physics score
    printf("Physics: ");
    scanf("%f", &d);

    // Get user input for Chemistry score
    printf("Chemistry: ");
    scanf("%f", &e);

    // Calculate the average percentage
    sum = (a + b + c + d + e) / 5;

    // Print the result
    printf("Percentage: %f", sum);

    // Return 0 to indicate successful execution
    return 0;
}
