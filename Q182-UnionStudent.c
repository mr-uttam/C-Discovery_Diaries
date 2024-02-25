#include<stdio.h>
#include<string.h>

// Union to represent a student with different attributes
typedef union Student {
    int roll;
    int yearOfJoining;
    char course[30];
    char name[20];
    char department[30];
} Student;

// Declare a union variable for a student
Student s1;

int main() {
    // Initialize attributes of the student using the union
    s1.roll = 30;
    s1.yearOfJoining = 2023;
    strcpy(s1.name, "UTTAM");
    strcpy(s1.department, "CSE");
    strcpy(s1.course, "B.TECH CSE AIML");

    // Display the attributes using the union
    printf("%d\n", s1.roll);
    printf("%d\n", s1.yearOfJoining);
    printf("%s\n", s1.name);
    printf("%s\n", s1.department);
    printf("%s\n", s1.course);

    return 0;
}
