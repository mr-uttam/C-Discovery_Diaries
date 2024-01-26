#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch (n) {
        case 1: {
            int a, b;
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);

            if (b != 0) {
                printf("Addition: %d\n", a + b);
                printf("Subtraction: %d\n", a - b);
                printf("Multiplication: %d\n", a * b);
                printf("Division: %d\n", a / b);
                printf("Modulus: %d\n", a % b);
            } else {
                printf("Cannot divide by zero!");
            }
            break;
        }
        case 2: {
            int c, d;
            printf("Enter 1st number: ");
            scanf("%d", &c);
            printf("Enter 2nd number: ");
            scanf("%d", &d);
            int x = pow(c, d);
            printf("Power: %d\n", x);
            break;
        }
        case 3: {
            int e;
            printf("Enter a number: ");
            scanf("%d", &e);
            float y = sqrt(e);
            printf("Square root: %f\n", y);
            break;
        }
        case 4: {
            int f, g;
            printf("Enter 1st number: ");
            scanf("%d", &f);
            printf("Enter 2nd number: ");
            scanf("%d", &g);

            if (f > g) {
                printf("1st number is largest\n");
            } else {
                printf("2nd number is largest\n");
            }
            break;
        }
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
