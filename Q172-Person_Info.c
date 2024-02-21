#include <stdio.h>
#include <string.h>

// Define the structure for person information
struct person {
    float salary;
    int age;
    char name[50];
};

int main() {
    // Declare instances for three individuals
    struct person a, b, c;

    // Initialize information for the first individual
    a.salary = 40087.56;
    a.age = 25;
    strcpy(a.name, "Uttam Pal");

    // Initialize information for the second individual
    b.salary = 44587.96;
    b.age = 27;
    strcpy(b.name, "Rahul Das");

    // Initialize information for the third individual
    c.salary = 47857.25;
    c.age = 29;
    strcpy(c.name, "Akash Giri");

    // Print selected information about the individuals
    printf("Age of 'Rahul Das': %d\n", b.age);
    printf("Salary of 'Uttam Pal': %f\n", a.salary);
    printf("Name of 'Uttam Pal': %s\n", a.name);
    printf("Name of 'Akash Giri': %s\n", c.name);

    return 0;
}
