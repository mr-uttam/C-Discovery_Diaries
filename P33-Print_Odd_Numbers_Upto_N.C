// P33-Print_Odd_Numbers_Upto_N.C
// Description: Prints odd numbers from 1 to the user-input last number (n).

#include<stdio.h>

int main(){
    // Declare variables for loop control (i) and user input (n)
    int i, n;

    // Get user input for the last number
    printf("Enter the last number: ");
    scanf("%d", &n);

    // Use a loop to print odd numbers from 1 to n
    for(i = 1; i <= n; i = i + 2){
        printf("%d\n", i);
    }

    // Return 0 to indicate successful execution
    return 0;
}
