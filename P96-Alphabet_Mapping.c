#include <stdio.h>

int main() {
    char n;
    
    // Get user input
    printf("Enter an alphabet: ");
    scanf("%c", &n);

    switch (n) {
        case 'a': 
            printf("\na for Apple");
            break;
        case 'b': 
            printf("\nb for Ball");
            break;
        case 'c': 
            printf("\nc for Cat");
            break;
        case 'd': 
            printf("\nd for Dog");
            break;
        default:
            printf("Input does not match");
    }

    return 0;
}
