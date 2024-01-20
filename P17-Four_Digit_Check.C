#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 999 && n < 10000) {
        printf("It is a four-digit number");
    } else {
        printf("It is not a four-digit number");
    }

    return 0;
}
