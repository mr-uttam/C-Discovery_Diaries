#include<stdio.h>

int main(){
    int n, a = 0, b = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;

    while(i <= n){
        if(i % 2 == 0){
            a = a - i;
        } else {
            b = b + i;
        }

        i++;
    }

    printf("The sum of the series (1 - 2 + 3 - 4 + ... + n) = %d", b + a);

    return 0;
}
