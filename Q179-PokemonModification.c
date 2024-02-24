#include<stdio.h>
#include<string.h>

// Structure to represent a Pokemon
typedef struct Pokemon {
    int speed;
    int hp;
    int attack;
    char name[20];
} Pokemon;

// Function to modify Pokemon attributes (does not affect the original)
void modifyPokemonAttributes(pokemon p) {
    p.hp = 130;
    p.attack = 100;
    p.speed = 180;
    strcpy(p.name, "charizard");
    return;
}

int main() {
    // Declare and initialize a Pokemon (Pikachu)
    Pokemon pikachu;
    pikachu.hp = 100;
    pikachu.attack = 80;
    pikachu.speed = 140;
    strcpy(pikachu.name, "pikachu");

    // Call the function to modify Pikachu's attributes (original remains unchanged)
    modifyPokemonAttributes(pikachu);

    // Display Pikachu's attributes (original values)
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%s\n", pikachu.name);

    return 0;
}
