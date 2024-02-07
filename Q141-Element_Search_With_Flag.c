#include <stdio.h>
#include <stdbool.h>

int main() {
    // Initialize variables
    int i, x = 4, idx = 0;
    int arr[7] = {1, 2, 3, 3, 4, 5, 6};
    // The array 'arr' is predefined with 7 elements.
    // 'x' is the element to search for.
    bool flag = false;

    // Iterate through the array to find the element 'x'
    for (i = 0; i < 7; i++) {
        if (arr[i] == x) {
            // Set the flag to true and store the index
            flag = true;
            idx = i;
            break;  // Break the loop if the element is found
        }
    }

    // Display the result based on the flag
    if (flag == true) {
        printf("%d is present in this array, and its index is %d", x, idx);
    } else {
        printf("%d is not present in this array", x);
    }

    return 0;
}
