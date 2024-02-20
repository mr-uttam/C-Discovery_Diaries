#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the string
    char str[40];

    // Prompt the user to enter a string
    printf("Enter a string (up to 39 characters): ");

    // Read a string from the user using gets()
    // Note: gets() is discouraged due to security risks; alternatives like fgets() are recommended.
    gets(str);

    // Display the entered string using puts()
    puts(str);

    return 0;
}
