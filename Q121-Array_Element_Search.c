#include<stdio.h>

int main() {
    int i, n, a;
    
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to search
    printf("Enter the position of the element you need: ");
    scanf("%d", &a);

    // Check if the position is within array bounds
    if (a >= 1 && a <= n) {
        printf("\n%d\n", arr[a - 1]);
    } else {
        printf("Invalid position.\n");
    }

    return 0;
}
