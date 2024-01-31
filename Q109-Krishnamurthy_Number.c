#include <stdio.h>

int fact(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    return a * fact(a - 1);
}

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while (num > 0) {
        sum += fact(num % 10);
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is a Krishnamurthy number\n", original);
    } else {
        printf("%d is not a Krishnamurthy number\n", original);
    }

    return 0;
}
