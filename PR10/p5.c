#include<stdio.h>

typedef struct {
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
} Student;

void inputStudent(Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);
    printf("Enter name: ");
    scanf("%s", s->name);

    s->total = 0;
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &s->marks[i]);
        s->total += s->marks[i];
    }
    s->percentage = s->total / 5.0;
}

void displayStudent(Student s) {
    printf("Roll No: %d, Name: %s, Total Marks: %d, Percentage: %.2f\n",
           s.rollNo, s.name, s.total, s.percentage);
}

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < 5; i++) {
        displayStudent(students[i]);
    }

    return 0;
}