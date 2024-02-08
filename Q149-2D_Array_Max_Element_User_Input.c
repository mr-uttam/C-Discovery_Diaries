#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables for loop counters, maximum element, and its indices
    int i, j, k, l, max = INT_MIN;

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

    // Display the entered 2D array and find the maximum element and its indices
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] > max) {
                max = arr[i][j];
                k = i;
                l = j;
            }
        }
        printf("\n");
    }

    // Display the maximum element and its index
    printf("Max element is %d\nAnd its index is (%d, %d)", max, k, l);

    return 0;
}
