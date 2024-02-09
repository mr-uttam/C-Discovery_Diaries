#include <stdio.h>

int main() {
    // Initialize variables for loop counters, row count, column count, and sum
    int i, j, r, c, x, y, p, q, sum = 0;

    // Get the number of rows and columns from the user
    printf("Enter Rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    // Declare a 2D array with user-specified dimensions
    int arr[r][c];

    // Input elements into the 2D array
    printf("Enter Random numbers:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];  // Calculate sum of all elements
        }
    }

    // Display the entered 2D array and the sum of all elements
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Input values for range (x, y) to (p, q)
    printf("Enter values for x, y, p, q: ");
    scanf("%d %d %d %d", &x, &y, &p, &q);

    // Calculate the sum of the specified range
    int rangeSum = 0;
    for (i = x; i <= p; i++) {
        for (j = y; j <= q; j++) {
            rangeSum += arr[i][j];
        }
    }

    // Display the sum of the specified range
    printf("Sum of (%d,%d) to (%d,%d) is %d", x, y, p, q, rangeSum);

    return 0;
}
