#include<stdio.h>

int main() {
    int i, n, prod = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        prod *= arr[i];
    }

    printf("The product of the elements is %d\n", prod);

    return 0;
}
