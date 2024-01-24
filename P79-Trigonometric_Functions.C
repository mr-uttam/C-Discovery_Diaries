#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter an angle in degrees: ");
    scanf("%d", &n);

    float sin_value = sin(n);
    float cos_value = cos(n);
    float tan_value = tan(n);

    printf("sin(%d) = %f\n", n, sin_value);
    printf("cos(%d) = %f\n", n, cos_value);
    printf("tan(%d) = %f\n", n, tan_value);

    return 0;
}
