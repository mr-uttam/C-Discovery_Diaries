#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables for loop counters, row sum, maximum row sum, and row number
    int i, j, r, c, k = 0, sum = INT_MIN;

    // Get the number of rows and columns from the user
    printf("Enter Rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    // Declare a 2D array with user-specified dimensions
    int arr[r][c];

    // Input elements into the 2D array
    printf("Enter the elements for a %dx%d array:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered 2D array, calculate row sums, and find the maximum row sum
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
            rowSum += arr[i][j];
            if (rowSum > sum) {
                sum = rowSum;
                k = i;
            }
        }
        printf("\n");
    }

    // Display the maximum row sum and its row number
    printf("Max sum of the Rows is %d\nAnd its Row no is %d", sum, k + 1);

    return 0;
}
