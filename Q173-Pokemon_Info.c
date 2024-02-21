#include <stdio.h>
#include <string.h>

// Define the structure for Pokémon information
struct pokemon {
    int speed;
    int hp;
    int attack;
    char name[20];
};

int main() {
    // Declare an array of type "pokemon" to store information about three Pokémon
    struct pokemon arr[3];

    // Initialize information for the first Pokémon
    arr[0].attack = 60;
    arr[0].hp = 90;
    arr[0].speed = 110;
    strcpy(arr[0].name, "Pikachu");

    // Initialize information for the second Pokémon
    arr[1].attack = 90;
    arr[1].hp = 190;
    arr[1].speed = 140;
    strcpy(arr[1].name, "Charizard");

    // Initialize information for the third Pokémon
    arr[2].attack = 70;
    arr[2].hp = 130;
    arr[2].speed = 190;
    strcpy(arr[2].name, "Mewtwo");

    // Print details of each Pokémon
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Speed: %d\n", arr[i].speed);
        printf("HP: %d\n", arr[i].hp);
        printf("Attack: %d\n\n", arr[i].attack);
    }

    return 0;
}
