#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int c = 1; c <= n - i; c++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int k = i; k > 1; k--) {
            printf("%d", k - 1);
        }

        printf("\n");
    }

    return 0;
}
