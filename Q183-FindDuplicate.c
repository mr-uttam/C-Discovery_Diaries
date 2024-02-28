#include<stdio.h>

int main() {
    // Declare variables
    int i, sum = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};
    
    // Calculate the sum of array elements
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }

    // Calculate the expected sum for a unique array
    int expectedSum = (9 * (9 + 1)) / 2;

    // Print the duplicate element by subtracting the expected sum from the actual sum
    printf("Duplicate element is %d", sum - expectedSum);

    return 0;
}
