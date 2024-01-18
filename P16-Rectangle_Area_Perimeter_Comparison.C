// P16-Rectangle_Area_Perimeter_Comparison.C
// Description: Calculates the area and perimeter of a rectangle, compares them,
// and prints whether the area is greater, less than, or equal to the perimeter.

#include<stdio.h>

int main(){
    // Declare variables for length (l), breadth (b), area, perimeter
    float l, b, area, perimeter;

    // Get user input for the length of the rectangle
    printf("Enter the length: ");
    scanf("%f", &l);

    // Get user input for the breadth of the rectangle
    printf("Enter the breadth: ");
    scanf("%f", &b);

    // Calculate area and perimeter
    area = l * b;
    perimeter = 2 * (l + b);

    // Print the calculated area
    printf("Area is %f", area);

    // Print the calculated perimeter
    printf("\nPerimeter is %f", perimeter);

    // Compare area and perimeter
    if (area > perimeter) {
        printf("\nArea is greater than perimeter");
    } else if (area < perimeter) {
        printf("\nArea is less than perimeter");
    } else {
        printf("\nArea is equal to perimeter");
    }

    // Return 0 to indicate successful execution
    return 0;
}
