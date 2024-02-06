#include <stdio.h>

// Function to reverse the elements of an array
void reverse(int arr[]) {
    int i = 0;
    int j = 6;

    // Swap elements from the beginning and end of the array
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
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
