#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers is %d", sum);

    return 0;
}
