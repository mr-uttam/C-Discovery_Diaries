#include <stdio.h>

int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r, z;
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    if (n >= r) {
        z = factorial(n) / (factorial(r) * factorial(n - r));
        printf("%d", z);
    } else {
        printf("Wrong, n must be larger than or equal to r");
    }

    return 0;
}
