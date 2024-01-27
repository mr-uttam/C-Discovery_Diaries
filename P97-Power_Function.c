#include <stdio.h>

int power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    
    int x = power(a, b / 2);
    
    if (b % 2 == 0) {
        return x * x;
    } else {
        return x * x * a;
    }
}

int main() {
    int base, exponent;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    printf("%d raised to the power %d is %d", base, exponent, power(base, exponent));
    
    return 0;
}
