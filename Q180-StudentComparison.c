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

// Function to compare two students based on attributes
void compareStudents(Student p, Student q) {
    if (strcmp(p.department, q.department) == 0)
        printf("Same Department\n");
    else if (p.roll == q.roll)
        printf("Same Roll No\n");
    else if (strcmp(p.course, q.course) == 0)
        printf("Same Course\n");
    else if (p.yearOfJoining == q.yearOfJoining)
        printf("Same Year\n");
    else
        printf("Attributes do not match\n");
    return;
}

// Declare two student variables
Student s1, s2;

int main() {
    // Initialize the attributes for the first student (s1)
    s1.roll = 30;
    s1.yearOfJoining = 2023;
    strcpy(s1.name, "UTTAM");
    strcpy(s1.department, "CSE");
    strcpy(s1.course, "B.TECH CSE AIML");

    // Initialize the attributes for the second student (s2)
    s2.roll = 23;
    s2.yearOfJoining = 2023;
    strcpy(s2.name, "RAHUL");
    strcpy(s2.department, "EE");
    strcpy(s2.course, "ELECTRICAL ENGINEERING");

    // Call the function to compare the two students
    compareStudents(s1, s2);

    return 0;
}
