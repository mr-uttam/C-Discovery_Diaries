#include<stdio.h>

int main(){
    float r, area;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("The area of a circle is: %f", area);

    return 0;
}
