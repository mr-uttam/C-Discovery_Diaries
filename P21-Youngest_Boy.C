// P21-Youngest_Boy.C
// Description: Determines the youngest boy among Ram, Shyam, and Madhu based on their ages.

#include<stdio.h>

int main(){
    // Declare variables for the ages of Ram (a), Shyam (b), and Madhu (c)
    int a, b, c;

    // Get user input for the age of Ram
    printf("The age of Ram: ");
    scanf("%d", &a);

    // Get user input for the age of Shyam
    printf("The age of Shyam: ");
    scanf("%d", &b);

    // Get user input for the age of Madhu
    printf("The age of Madhu: ");
    scanf("%d", &c);

    // Check conditions to find the youngest boy
    if (a < b && a < c) {
        printf("The youngest boy is Ram");
    }
    else if (b < a && b < c) {
        printf("The youngest boy is Shyam");
    }
    else {
        printf("The youngest boy is Madhu");
    }

    // Return 0 to indicate successful execution
    return 0;
}
