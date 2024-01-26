#include <stdio.h>

int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, z;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        for (int k = 0; k <= n - i; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            z = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", z);
        }
        printf("\n");
    }

    return 0;
}
