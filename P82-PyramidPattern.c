#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("* ");
        }

        for (int l = 1; l <= n - i; l++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
