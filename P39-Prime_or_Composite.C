#include<stdio.h>

int main(){
    int i, n, a = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n - 1; i++){
        if(n % i == 0){
            a = 1;
            break;
        }
    }

    if(a == 0){
        printf("The number is prime");
    }
    else{
        printf("The number is composite");
    }

    return 0;
}
