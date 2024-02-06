#include <stdio.h>

int main() {
    // Initialize variables
    int i, j, x, count = 0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // The array 'arr' is predefined with 8 elements.
    // 'x' is the target sum.

    x = 12;

    // Iterate through the array to find pairs with the given sum
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            // Check if the sum of elements at indices 'i' and 'j' is equal to 'x'
            if (arr[i] + arr[j] == x) {
                count++;
                // Display the pairs
                printf("Pairs are (%d, %d)\n\n", arr[i], arr[j]);
            }
        }
    }

    // Display the total count of pairs
    printf("Total pairs are %d", count);

    return 0;
}
