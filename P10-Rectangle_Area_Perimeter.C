#include<stdio.h>

int main(){
    float x, y, A, B;

    printf("Length of the rectangle: ");
    scanf("%f", &x);

    printf("Breadth of the rectangle: ");
    scanf("%f", &y);

    A = x * y;
    B = 2 * (x + y);

    printf("The area of the rectangle: %f\n", A);
    printf("The perimeter of the rectangle: %f", B);

    return 0;
}
