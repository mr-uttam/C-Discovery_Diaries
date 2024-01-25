#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int b = n - 1;
    int a = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= b; j++) {
            printf(" ");
        }
        b--;

        for (int k = 1; k <= a; k++) {
            printf("*");
        }
        a = a + 2;

        printf("\n");
    }

    return 0;
}
