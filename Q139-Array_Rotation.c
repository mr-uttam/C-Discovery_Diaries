#include <stdio.h>

// Function to reverse the elements of an array between specified indices
void reverse(int arr[], int si, int ei) {
    for (int i = si, j = ei; i < j; i++, j--) {
        // Swap elements from the beginning and end of the specified range
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main() {
    // Initialize variables
    int n, i, k;

    // Get the size of the array and rotation time from the user
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter rotation time: ");
    scanf("%d", &k);
    k = k % n; // Ensure k is within the array size

    int arr[n];

    // Input elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Perform array rotation
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    // Display the rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
