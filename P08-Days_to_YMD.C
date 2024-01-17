// P08-Days_to_YMD.C
// Description: Converts a given number of days into years, months, and days.

#include<stdio.h>

int main(){
    // Declare variables for input value (x), years (year), months (month), and days (day)
    int x, year, month, day;

    // Get user input for the number of days
    printf("Enter the value: ");
    scanf("%d", &x);

    // Calculate years, months, and days
    year = x / 365;
    month = (x % 365) / 30;
    day = (x % 365) % 30;

    // Print the result
    printf("Years: %d\nMonths: %d\nDays: %d", year, month, day);

    // Return 0 to indicate successful execution
    return 0;
}
