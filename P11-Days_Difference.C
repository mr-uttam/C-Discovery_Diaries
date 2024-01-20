#include<stdio.h>

int main(){
    int a, b, c, x, y, z, X, Y, Z, D;

    x = 2023, y = 12, z = 31;

    printf("Year: ");
    scanf("%d", &a);
    printf("Month: ");
    scanf("%d", &b);
    printf("Day: ");
    scanf("%d", &c);

    X = x - a;
    Y = y - b;
    Z = z - c;

    printf("%d Years %d Months %d Days", X, Y, Z);

    int leapYears = X / 4;
    D = X * 365 + leapYears + Y * 30 + Z;

    printf("\nDays Difference: %d", D);

    return 0;
}
