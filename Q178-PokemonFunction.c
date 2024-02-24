#include<stdio.h>
#include<string.h>

// Structure to represent a Pokemon
typedef struct Pokemon {
    int speed;
    int hp;
    int attack;
    char name[20];
} Pokemon;

// Function to display Pokemon attributes
void displayPokemonAttributes(Pokemon p) {
    printf("HP: %d\n", p.hp);
    printf("Attack: %d\n", p.attack);
    printf("Speed: %d\n", p.speed);
    printf("Name: %s\n", p.name);
    return;
}

int main() {
    // Declare and initialize a Pokemon (Pikachu)
    Pokemon pikachu;
    pikachu.hp = 100;
    pikachu.attack = 80;
    pikachu.speed = 140;
    strcpy(pikachu.name, "pikachu");

    // Call the function to display Pikachu's attributes
    displayPokemonAttributes(pikachu);

    return 0;
}
