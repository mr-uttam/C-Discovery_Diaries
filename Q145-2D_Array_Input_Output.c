#include <stdio.h>

int main() {
    // Initialize variables for the number of rows and columns
    int r, c;

    // Get the number of rows from the user
    printf("Enter rows: ");
    scanf("%d", &r);

    // Get the number of columns from the user
    printf("Enter columns: ");
    scanf("%d", &c);

    // Declare a 2D array based on user input
    int arr[r][c];

    // Input elements into the 2D array
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Display the entered 2D array
    printf("Entered 2D Array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
