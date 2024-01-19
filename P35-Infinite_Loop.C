// P35-Infinite_Loop.C
// Description: An example of an infinite loop that prints odd numbers.

#include<stdio.h>

int main(){
    // Declare variable for loop control (i)
    int i;

    // Infinite loop to print odd numbers
    for(i = 1; i > 0; i = i + 2){
        // Print the current value of i
        printf("%d\n", i);
    }

    // The program will never reach this point due to the infinite loop

    // Return 0 to indicate successful execution
    return 0;
}
