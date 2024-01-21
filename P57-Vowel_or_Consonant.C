#include<stdio.h>

int main() {
    char chr;

    printf("Enter any alphabet: ");
    scanf("%c", &chr);

    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
         printf("%c is a vowel", chr);
    }
    else{
        printf("%c is a consonant", chr);
    }

    return 0;
}
