#include <stdio.h>
#include <string.h>

int main() {
    // Initialize two character arrays to store strings
    char s1[20] = "Uttam Pal";
    char s2[20];

    // Copy the content of s1 to s2 using strcpy()
    strcpy(s2, s1);

    // Modify the first character of the copied string
    s2[0] = 'M';

    // Display the modified string
    printf("%s", s2);

    return 0;
}
