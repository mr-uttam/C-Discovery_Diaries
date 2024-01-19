
#include<stdio.h>

int main(){
    float a, b, w, x, y, z;

    printf("\nEnter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    w = a + b;
    x = a - b;
    y = a * b;
    z = a / b;

    printf("The sum is: %f\n", w);
    printf("The subtraction is: %f\n", x);
    printf("The product is: %f\n", y);
    printf("The division is: %f\n", z);

    return 0;
}
