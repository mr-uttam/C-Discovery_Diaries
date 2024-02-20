#include <stdio.h>
#include <string.h>

int main() {
    // Initialize a character array to store a string
    char str[20] = "Uttam";

    // Insert the character 't' at a specified position in the string
    for (int i = 5; i >= 2; i--) {
        str[i + 1] = str[i];
    }
    str[1] = 't';

    // Display the modified string
    printf("%s", str);

    return 0;
}
