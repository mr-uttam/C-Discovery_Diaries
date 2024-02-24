#include<stdio.h>
#include<string.h>

// Structure to represent a basic Pokemon
typedef struct Pokemon {
    int speed;
    int hp;
    int attack;
    char name[20];
} Pokemon;

// Structure to represent a legendary Pokemon with an added ability
typedef struct LegendaryPokemon {
    Pokemon normal;
    char ability[20];
} LegendaryPokemon;

// Structure to represent an ultra-legendary Pokemon with a super ability
typedef struct UltraLegendaryPokemon {
    LegendaryPokemon legend;
    char superAbility[20];
} UltraLegendaryPokemon;

int main() {
    // Declare and initialize a basic Pokemon (Pikachu)
    Pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 120;
    pikachu.attack = 170;
    strcpy(pikachu.name, "pikachu");

    // Declare and initialize a legendary Pokemon (Charizard)
    LegendaryPokemon charizard;
    strcpy(charizard.normal.name, "charizard");
    charizard.normal.hp = 110;
    charizard.normal.attack = 140;
    charizard.normal.speed = 80;

    // Declare and initialize an ultra-legendary Pokemon (Mewtwo)
    UltraLegendaryPokemon mewtwo;
    strcpy(mewtwo.legend.normal.name, "mewtwo");
    mewtwo.legend.normal.hp = 110;
    mewtwo.legend.normal.attack = 140;
    mewtwo.legend.normal.speed = 80;

    // Display specific attributes of different Pokemon
    printf("%d\n", mewtwo.legend.normal.attack);
    printf("%d\n", charizard.normal.speed);
    printf("%d\n", pikachu.hp);

    return 0;
}
