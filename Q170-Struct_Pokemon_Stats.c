#include <stdio.h>
#include <string.h>

// Define the structure for Pokemon stats
struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
};

int main() {
    // Declare instances for Pikachu, Charizard, and Mewtwo
    struct pokemon pikachu, charizard, mewtwo;

    // Initialize Pikachu's stats
    pikachu.hp = 60;
    pikachu.attack = 100;
    pikachu.speed = 70;
    pikachu.tier = 'A';

    // Initialize Charizard's stats
    charizard.hp = 90;
    charizard.attack = 120;
    charizard.speed = 80;
    charizard.tier = 'B';

    // Initialize Mewtwo's stats
    mewtwo.hp = 98;
    mewtwo.attack = 80;
    mewtwo.speed = 110;
    mewtwo.tier = 'F';

    // Print selected stats for each Pokemon
    printf("Charizard's attack: %d\n", charizard.attack);
    printf("Pikachu's speed: %d\n", pikachu.speed);
    printf("Mewtwo's hp: %d\n", mewtwo.hp);
    printf("Pikachu's tier: %c\n", pikachu.tier);

    return 0;
}
