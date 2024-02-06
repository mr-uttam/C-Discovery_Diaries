#include <stdio.h>

int main() {
    // Initialize variables
    int i, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[8];

    // Reverse the elements of the array 'arr' and store in 'brr'
    for (i = 0; i <= 7; i++) {
        brr[i] = arr[7 - i];
    }

    // Print the reversed array 'brr'
    for (i = 0; i <= 7; i++) {
        printf("%d ", brr[i]);
    }

    return 0;
}
