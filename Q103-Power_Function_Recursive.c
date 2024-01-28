#include <stdio.h>

int power(int n, int m) {
    if (m == 0) {
        return 1;
    }
    
    int p = n * power(n, m - 1);
    return p;
}

int main() {
    int base, exponent;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &exponent);
    
    int result = power(base, exponent);
    printf("%d raised to the power %d is %d", base, exponent, result);
    
    return 0;
}
