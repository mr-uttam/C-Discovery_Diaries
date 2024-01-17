// P14-Profit_Loss.C
// Description: Calculates and categorizes profit or loss based on cost price (cp) and sell price (sp).

#include<stdio.h>

int main(){
    // Declare variables for cost price (cp) and sell price (sp)
    int cp, sp;

    // Get user input for the cost price
    printf("Enter the cost price: ");
    scanf("%d", &cp);

    // Get user input for the sell price
    printf("Enter the sell price: ");
    scanf("%d", &sp);

    // Check for profit
    if (cp < sp) {
        // If cost price is less than sell price, calculate and print profit
        printf("Profit: %d$", sp - cp);
    }
    // Check for loss
    else if (sp < cp) {
        // If sell price is less than cost price, calculate and print loss
        printf("Loss: %d$", cp - sp);
    }
    // If neither profit nor loss, it's a break-even scenario
    else {
        printf("No profit, no loss");
    }

    // Return 0 to indicate successful execution
    return 0;
}
