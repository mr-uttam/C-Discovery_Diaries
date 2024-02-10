#include <stdio.h>

int main() {
    // Initialize variables for matrix dimensions
    int m, n, p, q;

    // Get dimensions and elements of the first matrix from the user
    printf("Enter rows of the 1st matrix: ");
    scanf("%d", &m);
    printf("Enter columns of the 1st matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the 1st matrix:\n\n");
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Get dimensions and elements of the second matrix from the user
    printf("\nEnter rows of the 2nd matrix: ");
    scanf("%d", &p);
    printf("Enter columns of the 2nd matrix: ");
    scanf("%d", &q);
    printf("Enter elements of the 2nd matrix:\n\n");
    int brr[p][q];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (n != p) {
        printf("These matrices cannot be multiplied.\n");
    } else {
        // Multiply the matrices if possible
        int res[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        // Display the result of matrix multiplication
        printf("Multiplication of two matrices is:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
