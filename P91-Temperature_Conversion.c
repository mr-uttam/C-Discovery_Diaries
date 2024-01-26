#include <stdio.h>

float convertTemp(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    float celsius = 32.0;
    float fahrenheit = convertTemp(celsius);

    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
