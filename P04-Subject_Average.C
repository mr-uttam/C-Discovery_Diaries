
#include<stdio.h>

int main(){
    float a, b, c, d, e, sum;

    printf("Bengali: ");
    scanf("%f", &a);

    printf("English: ");
    scanf("%f", &b);

    printf("Math: ");
    scanf("%f", &c);

    printf("Physics: ");
    scanf("%f", &d);

    printf("Chemistry: ");
    scanf("%f", &e);

    sum = (a + b + c + d + e) / 5;

    printf("Percentage: %f", sum);

    return 0;
}
