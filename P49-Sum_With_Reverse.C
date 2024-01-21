#include<stdio.h>

int main(){
    int n, r = 0, x;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;

    while(n != 0){
        r = r * 10;

        r = r + (n % 10);

        n = n / 10;
    }

    printf("The sum of a given number(%d) and its reverse(%d) is %d", x, r, x + r);

    return 0;
}
