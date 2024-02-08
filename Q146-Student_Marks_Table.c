#include <stdio.h>

int main() {
    // Initialize variables for the number of students and loop counters
    int r, i, j;

    // Get the number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &r);

    // Declare a 2D array to store roll numbers and marks
    int arr[r][2];

    // Input roll numbers and marks for each student
    for (i = 0; i < r; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &arr[i][0]);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &arr[i][1]);

        printf("\n");
    }

    // Display the table header
    printf(" Roll  Marks\n");

    // Display the roll numbers and marks for each student
    for (i = 0; i < r; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
