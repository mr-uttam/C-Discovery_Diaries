// P22-Grade_Assignment.C
// Description: Assigns a grade based on the entered marks within a specified range.

#include<stdio.h>

int main(){
    // Declare variable for user input (n)
    int n;

    // Get user input for marks
    printf("Enter marks: ");
    scanf("%d", &n);

    // Assign grades based on the specified range
    if (n <= 100 && n >= 90) {
        printf("Excellent");
    }
    else if (n <= 89 && n >= 80) {
        printf("Very good");
    }
    else if (n <= 79 && n >= 70) {
        printf("Good");
    }
    else if (n <= 69 && n >= 60) {
        printf("You can do better");
    }
    else if (n <= 59 && n >= 50) {
        printf("Average");
    }
    else if (n <= 49 && n >= 40) {
        printf("Below Average");
    }
    else if (n < 40) {
        printf("Fail");
    }
    else {
        printf("Your data does not match");
    }	

    // Return 0 to indicate successful execution
    return 0;	
}
