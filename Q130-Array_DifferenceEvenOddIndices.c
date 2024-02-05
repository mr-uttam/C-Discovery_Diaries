#include<stdio.h>

int main() {
    int i, n, sumEven = 0, sumOdd = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    printf("Difference between sum of even and odd indices is %d", sumEven - sumOdd);

    return 0;
}
