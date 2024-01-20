#include<stdio.h>

int main(){
    long long int i, n, a = 1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(i = 1; i <= n; i++){
        printf("%lld   ", a);

        a = a * 2;
    }

    return 0;
}
