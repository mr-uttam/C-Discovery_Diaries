#include<stdio.h>

int main() {
    // Initialize an integer array
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};

    // Iterate through the array to find duplicates
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            // Check if the elements at positions i and j are equal (duplicate)
            if (arr[i] == arr[j]) {
                printf("%d is a duplicate\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
