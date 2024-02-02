#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int k = num - i; k >= 1; k--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= num; i++) {
        for (int k = 1; k <= i; k++) {
            printf(" ");
        }
        for (int j = num - i; j >= 1; j--) {
            if (j == 1 || j == num - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
