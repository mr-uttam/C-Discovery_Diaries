#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int k = 1; k <= num - i; k++) {
            printf("  ");
        }
        for (int j = 1; j <= num; j++) {
            if (j == 1 || j == num || i == num || i == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
