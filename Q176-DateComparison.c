#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// Structure to represent a date
typedef struct Date {
    int day;
    int month;
    int year;
} Date;

int main() {
    // Declare two date variables
    Date a, b;
    
    // Initialize the first date (a)
    a.day = 23;
    a.month = 4;
    a.year = 1998;

    // Initialize the second date (b)
    b.day = 12;
    b.month = 10;
    b.year = 2023;
    
    // Flag to indicate date equality
    bool flag = false;

    // Check for equality in day, month, and year
    if (a.day == b.day) flag = true;
    if (a.month == b.month) flag = true;
    if (a.year == b.year) flag = true;

    // Display the result based on the flag
    if (flag == false) {
        printf("Dates are not equal");
    } else {
        printf("Dates are equal");
    }

    return 0;
}
