#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables for loop counters and sum
    int i, j, sum = 0;

    // Declare a 2D array with 2 rows and 3 columns
    int arr[2][3];

    // Input elements into the 2D array
    printf("Enter the elements for a 2x3 array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered 2D array and calculate the sum
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    // Display the sum of the matrix
    printf("Sum of the Matrix is %d", sum);

    return 0;
}
