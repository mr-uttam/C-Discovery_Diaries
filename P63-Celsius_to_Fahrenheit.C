#include<stdio.h>

int main(){
    float c;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);

    float f = (9 * c + 160) / 5;

    printf("The temperature in Fahrenheit: %f", f);

    return 0;
}
