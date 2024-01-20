#include<stdio.h>

int main(){
    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("\nLargest number is %d", (a > b) ? a : b);

    return 0;
}
