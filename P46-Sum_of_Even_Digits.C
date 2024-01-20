#include<stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int x = 0;

    while(n != 0){
        int a = n % 10;

        n = n / 10;

        if(a % 2 == 0){
            x = x + a;
        }
    }

    printf("%d", x);

    return 0;
}
