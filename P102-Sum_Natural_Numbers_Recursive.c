#include <stdio.h>

int sum(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    
    int z = n + sum(n - 1);
    return z;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int z = sum(n);
    printf("%d", z);
    
    return 0;
}
