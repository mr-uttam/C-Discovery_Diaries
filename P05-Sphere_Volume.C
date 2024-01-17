// P05-Sphere_Volume.C
// Description: Calculates the volume of a sphere based on the given radius.

#include<stdio.h>

int main(){
    // Declare variables for the radius and volume
    int r, volume;
    
    // Get user input for the radius of the sphere
    printf("Enter the radius of a sphere: ");
    scanf("%d", &r);
    
    // Calculate the volume of the sphere using the formula (4/3) * π * r^3
    volume = (4 * 3.14 * r * r * r) / 3;
    
    // Print the volume of the sphere
    printf("Volume of the sphere: %d", volume);

    // Return 0 to indicate successful execution
    return 0;
}
