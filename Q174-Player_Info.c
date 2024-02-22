#include <stdio.h>
#include <string.h>

// Define the structure for player information
typedef struct player {
    char firstname[15];
    char lastname[15];
    int age;
    int noOfMatches;
    float average;
} player;

int main() {
    int a;
    printf("Enter the number of players: ");
    scanf("%d", &a);

    // Declare an array of type "player" to store information about players
    player arr[a];

    // Take input for each player's details
    for (int i = 0; i < a; i++) {
        printf("Enter First name: ");
        scanf("%s", arr[i].firstname);
        printf("Enter Last name: ");
        scanf("%s", arr[i].lastname);
        printf("Enter Age: ");
        scanf("%d", &arr[i].age);
        printf("Enter NoOfMatches: ");
        scanf("%d", &arr[i].noOfMatches);
        printf("Enter Average: ");
        scanf("%f", &arr[i].average);
        printf("\n\n");
    }

    // Print details of each player
    for (int i = 0; i < a; i++) {
        printf("Name: %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age: %d\n", arr[i].age);
        printf("NoOfMatches: %d\n", arr[i].noOfMatches);
        printf("Average: %f\n\n", arr[i].average);
    }

    return 0;
}
