#include <stdio.h>

int main() {
    // Initialize variables
    int i, j, k, x, count = 0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // The array 'arr' is predefined with 8 elements.
    // 'x' is the target sum.

    x = 12;

    // Iterate through the array to find triplets with the given sum
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            for (k = j + 1; k < 8; k++) {
                // Check if the sum of elements at indices 'i', 'j', and 'k' is equal to 'x'
                if (arr[i] + arr[j] + arr[k] == x) {
                    count++;
                    // Display the triplets
                    printf("Triplets are (%d, %d, %d)\n\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }

    // Display the total count of triplets
    printf("Total triplets are %d", count);

    return 0;
}
