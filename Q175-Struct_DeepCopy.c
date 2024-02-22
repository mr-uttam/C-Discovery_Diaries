#include <stdio.h>
#include <string.h>

// Define a structure for Pokémon information using typedef
typedef struct pokemon {
    char name[20];
    int speed;
    int hp;
    int attack;
} pokemon;

int main() {
    // Declare two variables of type "pokemon"
    pokemon a, b;

    // Initialize information for the first Pokémon "a"
    a.hp = 90;
    a.speed = 110;
    a.attack = 70;
    strcpy(a.name, "Pikachu");

    // Perform a deep copy from "a" to "b"
    b = a;

    // Modify the name of the second Pokémon "b"
    strcpy(b.name, "Charizard");

    // Print the name of the first Pokémon "a"
    printf("%s", a.name);

    return 0;
}
