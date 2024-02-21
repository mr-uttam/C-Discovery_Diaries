#include <stdio.h>
#include <string.h>

// Define the structure for book information
struct book {
    float price;
    int noOfpages;
    char name[50];
};

int main() {
    // Declare instances for three books
    struct book a, b, c;

    // Initialize information for the first book
    a.price = 400.56;
    a.noOfpages = 200;
    strcpy(a.name, "Secret Seven");

    // Initialize information for the second book
    b.price = 600.5;
    b.noOfpages = 300;
    strcpy(b.name, "Last Night");

    // Initialize information for the third book
    c.price = 800.25;
    c.noOfpages = 350;
    strcpy(c.name, "Silent Lover");

    // Print selected information about the books
    printf("Number of pages in 'Last Night': %d\n", b.noOfpages);
    printf("Price of 'Secret Seven': %f\n", a.price);
    printf("Name of 'Secret Seven': %s\n", a.name);
    printf("Name of 'Silent Lover': %s\n", c.name);

    return 0;
}
