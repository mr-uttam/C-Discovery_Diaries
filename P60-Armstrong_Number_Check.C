#include<stdio.h>

int main(){
    int n, t, rem, arm = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    while(n > 0){
        rem = n % 10;
        arm = (rem * rem * rem) + arm;
        n = n / 10;
    }

    if(t == arm){
        printf("This is an Armstrong number");
    }
    else{
        printf("This is not an Armstrong number");
    }

    return 0;
}
