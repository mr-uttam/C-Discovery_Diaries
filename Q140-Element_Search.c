#include <stdio.h>

int main() {
    // Initialize variables
    int i, x = 2;
    int arr[10] = {1, 2, 3, 4, 5, 2, 7, 8, 2, 10};
    // The array 'arr' is predefined with 10 elements.
    // 'x' is the element to search for.

    // Iterate through the array to find the element 'x'
    for (i = 0; i < 10; i++) {
        if (arr[i] == x) {
            // Display the presence of 'x' and its index
            printf("%d is present, and its index is %d\n", x, i);
        }
    }

    return 0;
}
