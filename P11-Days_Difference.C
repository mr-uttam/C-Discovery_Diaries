// P11-Days_Difference.C
// Description: Calculates the difference in years, months, and days between two dates,
// as well as the total number of days between the two dates.

#include<stdio.h>

int main(){
    // Declare variables for current date (x, y, z), user input date (a, b, c),
    // years difference (X), months difference (Y), days difference (Z),
    // and total days (D)
    int a, b, c, x, y, z, X, Y, Z, D;

    // Set current date
    x = 2023, y = 12, z = 31;

    // Get user input for the date
    printf("Year: ");
    scanf("%d", &a);
    printf("Month: ");
    scanf("%d", &b);
    printf("Day: ");
    scanf("%d", &c);

    // Calculate years, months, and days difference
    X = x - a;
    Y = y - b;
    Z = z - c;

    // Print the difference in years, months, and days
    printf("%d Years %d Months %d Days", X, Y, Z);

    // Calculate the total number of days
    int leapYears = X / 4;
    D = X * 365 + leapYears + Y * 30 + Z;

    // Print the total number of days
    printf("\nDays Difference: %d", D);

    // Return 0 to indicate successful execution
    return 0;
}
