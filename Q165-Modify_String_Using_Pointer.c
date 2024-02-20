#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the string
    char s1[40];

    // Prompt the user to enter a string
    puts("Enter a string: ");

    // Read a string from the user using gets()
    gets(s1);

    // Declare a pointer and point it to the start of the string
    char *s2 = s1;

    // Modify the first character of the string using the pointer
    s1[0] = 'M';

    // Display the modified string using the pointer
    printf("Modified string: %s", s2);

    return 0;
}
