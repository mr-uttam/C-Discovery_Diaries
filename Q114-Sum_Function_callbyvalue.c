#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2);

    printf("\nSum of the two numbers is %d\n", result);

    return 0;
}
