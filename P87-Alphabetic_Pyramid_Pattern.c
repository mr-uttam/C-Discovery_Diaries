#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int r = 65; 

        for (int c = 1; c <= n - i; c++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%c", r);
            r++;
        }

        int h = 64 + i;

        for (int k = 1; k <= i - 1; k++) {
            printf("%c", h - 1);
            h--;
        }

        printf("\n");
    }

    return 0;
}
