#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables for loop counters, row count, maximum 1s count, and row number
    int i, j, r, c, k = 0, add = INT_MIN;

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
        }
    }

    // Display the entered 2D array, count 1s in each row, and find the row with maximum 1s
    printf("\nEntered 2D Array:\n");
    for (i = 0; i < r; i++) {
        int count = 0;
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] == 1) {
                count++;
                if (count > add) {
                    add = count;
                    k = i + 1;
                }
            }
        }
        printf("\n");
    }

    // Display the row with the maximum number of 1s and the count of 1s in that row
    printf("Row %d has the maximum number of 1s\nAnd the count of 1s is %d", k, add);

    return 0;
}
