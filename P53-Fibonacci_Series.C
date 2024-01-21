#include<stdio.h>

int main(){
    int n, sum = 1, a = 1, b = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = a + b;

        a = b;
        b = sum;

        printf("The %dth Fibonacci number is %d\n", i, sum);
    }

    return 0;
}
