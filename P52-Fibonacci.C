#include<stdio.h>

int main(){
    int n, sum = 1, a = 1, b = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 2; i++){
        sum = a + b;

        a = b;
        b = sum;
    }

    printf("The %dth Fibonacci number is %d", n, sum);

    return 0;
}
