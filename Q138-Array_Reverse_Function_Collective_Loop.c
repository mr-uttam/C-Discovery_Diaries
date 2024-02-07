#include <stdio.h>

// Function to reverse the elements of an array using a collective for loop
void reverse(int arr[]) {
    for (int i = 0, j = 6; i < j; i++, j--) {
        // Swap elements from the beginning and end of the array
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main() {
    // Initialize variables
    int i;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Call the 'reverse' function to reverse the array 'arr'
    reverse(arr);

    // Print the reversed array 'arr'
    for (i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
