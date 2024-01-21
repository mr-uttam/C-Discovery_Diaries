#include<stdio.h>

int main(){
    int n, x = 1, a = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n){
        x = x * a;

        a++;
    }

    printf("Factorial of the given number is = %d", x);

    return 0;
}
