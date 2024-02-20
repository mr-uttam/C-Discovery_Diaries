#include <stdio.h>
#include <string.h>

int main() {
    // Initialize two character arrays to store strings
    char s1[20] = "Uttam";
    char s2[5] = " Pal";

    // Concatenate the strings s1 and s2 using strcat()
    strcat(s1, s2);

    // Display the resulting concatenated string
    printf("%s", s1);

    return 0;
}
