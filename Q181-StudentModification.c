#include<stdio.h>
#include<string.h>

// Structure to represent a student
typedef struct Student {
    int roll;
    int yearOfJoining;
    char course[30];
    char name[20];
    char department[30];
} Student;

// Function to change student attributes using a pointer
void modifyStudentAttributes(Student* p) {
    p->roll = 40;
    p->yearOfJoining = 2021;
    strcpy(p->name, "UTTAM");
    strcpy(p->department, "EE");
    strcpy(p->course, "B.TECH IN EE");
    return;
}

// Declare and initialize a student variable
Student s1 = {30, 2023, "B.TECH CSE AIML", "UTTAM", "CSE"};

int main() {
    // Display the initial attributes of the student (s1)
    printf("%d\n", s1.roll);
    printf("%d\n", s1.yearOfJoining);
    printf("%s\n", s1.name);
    printf("%s\n", s1.department);
    printf("%s\n", s1.course);

    // Call the function to modify the student's attributes using a pointer
    modifyStudentAttributes(&s1);

    // Display the modified attributes of the student (s1)
    printf("%d\n", s1.roll);
    printf("%d\n", s1.yearOfJoining);
    printf("%s\n", s1.name);
    printf("%s\n", s1.department);
    printf("%s\n", s1.course);

    return 0;
}
