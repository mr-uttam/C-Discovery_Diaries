#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sqrt_result = sqrt(n);

    printf("Square root of %d is: %d\n", n, sqrt_result);

    return 0;
}
