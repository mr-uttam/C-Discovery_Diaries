
#include<stdio.h>

int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    int y = x % 10;
    printf("Last digit of the number is %d", y);

    int z = x % 100;
    printf("\nLast two digits of the number is %d", z);

    int w = x % 1000;
    printf("\nLast three digits of the number is %d", w);

    return 0;
}
