#include <stdio.h>

void england() {
    printf("You are in England\n");
}

void australia() {
    printf("You are in Australia\n");
    england();
}

void india() {
    printf("You are in India\n");
    australia();
}

int main() {
    india();
    return 0;
}
