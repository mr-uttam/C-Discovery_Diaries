
#include<stdio.h>

int main(){
    float p, r, t, I;

    printf("Enter the principal amount (p): ");
    scanf("%f", &p);
    printf("Enter the rate (r): ");
    scanf("%f", &r);
    printf("Enter the time (t): ");
    scanf("%f", &t);

    I = (p * r * t) / 100;

    printf("Simple interest: %f", I);

    return 0;
}
