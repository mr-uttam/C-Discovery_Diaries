#include<stdio.h>

int main(){
    int x, year, month, day;

    printf("Enter the value: ");
    scanf("%d", &x);

    year = x / 365;
    month = (x % 365) / 30;
    day = (x % 365) % 30;

    printf("Years: %d\nMonths: %d\nDays: %d", year, month, day);

    return 0;
}
