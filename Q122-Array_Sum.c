#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the elements is %d\n", sum);

    return 0;
}
