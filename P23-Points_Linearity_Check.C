// P23-Points_Linearity_Check.C
// Description: Checks if three points are in a straight line.

#include<stdio.h>

int main(){
    // Declare variables for coordinates of three points (x1, y1), (x2, y2), (x3, y3)
    int x1, y1, x2, y2, x3, y3;

    // Get user input for the coordinates of the first point (x1, y1)
    printf("Enter x1, y1: ");
    scanf("%d%d", &x1, &y1);

    // Get user input for the coordinates of the second point (x2, y2)
    printf("Enter x2, y2: ");
    scanf("%d%d", &x2, &y2);

    // Get user input for the coordinates of the third point (x3, y3)
    printf("Enter x3, y3: ");
    scanf("%d%d", &x3, &y3);

    // Calculate slopes for the lines formed by the points (x1, y1)-(x2, y2) and (x2, y2)-(x3, y3)
    int m1 = (y2 - y1) / (x2 - x1);
    int m2 = (y3 - y2) / (x3 - x2);

    // Check if the slopes are equal to determine if the points are in a straight line
    if (m1 == m2) {
        printf("The points are in a straight line");
    }
    else {
        printf("The points are not in a straight line");
    }

    // Return 0 to indicate successful execution
    return 0;
}
