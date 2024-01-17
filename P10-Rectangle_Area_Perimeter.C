// P10-Rectangle_Area_Perimeter.C
// Description: Calculates the area and perimeter of a rectangle based on its length and breadth.

#include<stdio.h>

int main(){
    // Declare variables for length (x), breadth (y), area (A), and perimeter (B)
    float x, y, A, B;

    // Get user input for the length of the rectangle
    printf("Length of the rectangle: ");
    scanf("%f", &x);

    // Get user input for the breadth of the rectangle
    printf("Breadth of the rectangle: ");
    scanf("%f", &y);

    // Calculate area and perimeter
    A = x * y;
    B = 2 * (x + y);

    // Print the area and perimeter
    printf("The area of the rectangle: %f\n", A);
    printf("The perimeter of the rectangle: %f", B);

    // Return 0 to indicate successful execution
    return 0;
}
