#include <stdio.h>

int main() {
    // Initialize variables for loop counters, row count, column count
    int i, j, r, c;

    // Get the number of rows and columns from the user
    printf("Enter Rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    // Declare a matrix with user-specified dimensions
    int arr[r][c];

    // Input elements into the matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered matrix
    printf("\nEntered Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix (swap rows and columns)
    for (i = 0; i < r; i++) {
        for (j = i; j < c; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Display the matrix rotated 90 degrees (clockwise)
    printf("\n90 Degree Rotated Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = r - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
