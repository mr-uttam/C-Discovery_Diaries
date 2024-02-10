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
    printf("\nLine wave of the matrix is:\n");
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // Print the line in reverse order
            for (int i = m - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        } else {
            // Print the line in the original order
            for (int i = 0; i < m; i++) {
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}
