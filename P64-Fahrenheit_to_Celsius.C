#include<stdio.h>

int main(){
    float f;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = (5 * f - 160) / 9;

    printf("The temperature in Celsius: %f Degree C", c);

    return 0;
}
