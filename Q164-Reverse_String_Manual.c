#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the string
    char str[40];

    // Prompt the user to enter a string
    puts("Enter a string: ");

    // Read a string from the user using gets()
    gets(str);

    // Initialize variables for loop and size calculation
    int k = 0;
    int size = 0;

    // Calculate the length of the string without using strlen()
    while (str[k] != '\0') {
        size++;
        k++;
    }

    // Reverse the string manually
    int i, j;
    for (i = 0, j = size - 1; i <= j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Display the reversed string
    puts("The reversed string is: ");
    puts(str);

    return 0;
}
