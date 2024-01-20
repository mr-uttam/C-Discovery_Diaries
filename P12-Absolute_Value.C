#include<stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("The absolute value is %d", n = n * (-1));
    } else {
        printf("%d", n);
    }

    return 0;
}
