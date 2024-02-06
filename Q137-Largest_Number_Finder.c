#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables
    int i, n, count = INT_MIN;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Input array elements and find the largest number
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Update 'count' if a larger number is found
        if (count < arr[i])
            count = arr[i];
    }

    // Display the largest number in the array
    printf("\nLargest number is %d", count);

    return 0;
}
