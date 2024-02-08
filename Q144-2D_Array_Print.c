#include <stdio.h>

int main() {
    // Initialize a 2D array
    int arr[2][2] = {{1, 2}, {3, 4}};
    // The 2D array 'arr' is predefined with 2 rows and 2 columns.

    // Iterate through the 2D array to print its elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // Print the element at row 'i' and column 'j'
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // Move to the next row after printing all elements in a row
    }

    return 0;
}
