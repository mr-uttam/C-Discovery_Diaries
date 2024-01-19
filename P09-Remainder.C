
#include<stdio.h>

int main(){
    int a, b, Remainder;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    Remainder = a % b;

    printf("The remainder is: %d", Remainder);

    return 0;
}
