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

    // Input elements into the 2D array (0s and 1s)
    printf("Enter 0 and 1 only:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered 2D array, calculate row sums, and find the maximum row sum with 1s
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

    // Display the row with the maximum number of 1s and its total sum
    printf("In row %d is the maximum number of 1s present\nAnd the total sum of this row is %d", k + 1, sum);

    return 0;
}
