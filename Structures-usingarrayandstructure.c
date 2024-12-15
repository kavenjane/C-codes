#include <stdio.h>
#include <string.h>

// Defining a structure to represent a student
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Input: Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declaring an array of structures
    struct Student students[n];

    // Input: Student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // To handle multi-word names
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying the student details
    printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s%.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}