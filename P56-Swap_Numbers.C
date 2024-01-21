#include<stdio.h>

int main(){
    int a, b;

    printf("Enter 1st and 2nd number: ");
    scanf("%d%d", &a, &b);

    if(a == b){
        printf("Given numbers are equal");
    }
    else{
        a = a + b;
        b = a - b;
        a = a - b;

        printf("Swap value is %d and %d", a, b);
    }

    return 0;
}
