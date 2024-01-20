
#include<stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    n % 2 == 0 ? printf("The number is even") : printf("The number is odd");

    return 0;
}
