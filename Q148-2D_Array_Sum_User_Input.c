#include <stdio.h>

int main() {
    // Initialize variables for loop counters and sum
    int i, j, sum = 0;

    // Declare a 2D array with 2 rows and 2 columns
    int arr[2][2];

    // Input elements into the 2D array
    printf("Enter the elements for a 2x2 array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered 2D array and calculate the sum
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    // Display the sum of the given matrix
    printf("Sum of the given matrix is %d", sum);

    return 0;
}
