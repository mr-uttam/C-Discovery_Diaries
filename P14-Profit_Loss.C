
#include<stdio.h>

int main(){
    int cp, sp;

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the sell price: ");
    scanf("%d", &sp);

    if (cp < sp) {
        printf("Profit: %d$", sp - cp);
    }
    else if (sp < cp) {
        printf("Loss: %d$", cp - sp);
    }
    else {
        printf("No profit, no loss");
    }

    return 0;
}
