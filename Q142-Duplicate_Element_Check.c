#include <stdio.h>

int main() {
    // Initialize variables
    int i, j;
    int arr[8] = {1, 2, 3, 4, 5, 6, 6, 7};
    // The array 'arr' is predefined with 8 elements.

    // Iterate through the array to check for duplicate elements
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (arr[i] == arr[j]) {
                // Print the duplicate element
                printf("%d is a duplicate\n", arr[i]);
            }
        }
    }

    return 0;
}
