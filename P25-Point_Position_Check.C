// P25-Point_Position_Check.C
// Description: Checks the position of a point (x, y) relative to the x and y axes.

#include<stdio.h>

int main(){
    // Declare variables for coordinates of a point (x, y)
    int x, y;

    // Get user input for the coordinates of the point (x, y)
    printf("Enter the coordinates (x, y): ");
    scanf("%d%d", &x, &y);

    // Check the position of the point relative to the x and y axes
    if (x == 0 && y == 0) {
        printf("The point is at the origin");
    }
    else if (x == 0 && y != 0) {
        printf("The point is on the y-axis");
    }
    else if (x != 0 && y == 0) {
        printf("The point is on the x-axis");
    }
    else {
        printf("The point is not on the x or y axis");
    }

    // Return 0 to indicate successful execution
    return 0;
}
