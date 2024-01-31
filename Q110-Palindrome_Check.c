#include <stdio.h>

int main() {
    int num, remainder, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num = num / 10;
    }

    if (reversedNum == originalNum) {
        printf("%d is a palindrome\n", originalNum);
    } else {
        printf("%d is not a palindrome\n", originalNum);
    }

    return 0;
}
