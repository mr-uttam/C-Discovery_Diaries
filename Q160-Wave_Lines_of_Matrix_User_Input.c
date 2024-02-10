#include <stdio.h>

int main() {
   
    int m, n;

    // Get dimensions and elements of the matrix from the user
    printf("Enter rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter columns of the matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n\n");
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the entered matrix
    printf("Entered Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Display the lines of the matrix in a wave pattern
    printf("\nLines wave of the matrix:\n");
    for (int i = 0; i < m; i++) {
        if (i % 2 != 0) {
            // Print the line in reverse order
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        } else {
            // Print the line in the original order
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[i][k]);
            }
        }

        printf("\n");
    }

    return 0;
}
