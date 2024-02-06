#include <stdio.h>
#include <limits.h>

int main() {
    // Initialize variables
    int i, arr[8] = {1, -5, 7, -4, 9, 3, -9, 4};
    // The array 'arr' is predefined with 8 elements.

    int max = INT_MIN, smax = INT_MIN;
    // 'max' stores the largest element, 'smax' stores the second-largest element.

    // Iterate through the array to find the second-largest element
    for (i = 0; i <= 7; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && max != arr[i]) {
            smax = arr[i];
        }
    }

    // Display the second-largest element
    printf("%d", smax);

    return 0;
}
