#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        int a = 65;

        for (int k = 1; k <= i; k++) {
            printf("%c", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}
