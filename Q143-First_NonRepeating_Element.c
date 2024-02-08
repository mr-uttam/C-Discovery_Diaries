#include <stdio.h>
#include <stdbool.h>

int main() {
    // Initialize variables
    int i, j;
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    // The array 'arr' is predefined with 7 elements.
    bool flag = false;

    // Iterate through the array to find the first non-repeating element
    for (i = 0; i <= 6; i++) {
        flag = false;  // Reset the flag for each element

        // Check for duplicates in the rest of the array
        for (j = i + 1; j <= 6; j++) {
            if (arr[i] == arr[j]) {
                flag = true;
                break;  // Break if a duplicate is found
            }
        }

        // If no duplicates are found, print the first non-repeating element and exit the loop
        if (flag == false) {
            printf("%d ", arr[i]);
            break;
        }
    }

    return 0;
}
