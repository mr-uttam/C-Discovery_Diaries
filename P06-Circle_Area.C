// P06-Circle_Area.C
// Description: Calculates the area of a circle based on the given radius.

#include<stdio.h>

int main(){
    // Declare variables for the radius and area
    float r, area;

    // Get user input for the radius of the circle
    printf("Enter the radius: ");
    scanf("%f", &r);

    // Calculate the area of the circle using the formula π * r^2
    area = 3.14 * r * r;

    // Print the area of the circle
    printf("The area of a circle is: %f", area);

    // Return 0 to indicate successful execution
    return 0;
}
