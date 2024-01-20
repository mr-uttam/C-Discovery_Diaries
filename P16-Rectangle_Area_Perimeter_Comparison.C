#include<stdio.h>

int main(){
    float l, b, area, perimeter;

    printf("Enter the length: ");
    scanf("%f", &l);

    printf("Enter the breadth: ");
    scanf("%f", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area is %f", area);

    printf("\nPerimeter is %f", perimeter);

    if (area > perimeter) {
        printf("\nArea is greater than perimeter");
    } else if (area < perimeter) {
        printf("\nArea is less than perimeter");
    } else {
        printf("\nArea is equal to perimeter");
    }

    return 0;
}
