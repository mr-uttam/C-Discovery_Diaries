#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int c, int d) {
    return c - d;
}

int fact(int e) {
    int i, f = 1;
    for (i = 1; i <= e; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int a, b, c, d, e, n;

    printf("Enter choice:\n1--> Sum\n2--> Subtraction\n3--> Factorial\n ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("\nSum of the given numbers is %d", sum(a, b));
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &c, &d);
            printf("\nSubtraction of the given numbers is %d", sub(c, d));
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &e);
            printf("\nFactorial of the given number is %d", fact(e));
            break;
        default:
            printf("\nWrong input");
    }

    return 0;
}
