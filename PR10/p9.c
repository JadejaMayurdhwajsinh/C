#include<stdio.h>

typedef struct {
    int rollNo;
    int marks[5];
    int total;
    float percentage;
} Student;

void calculate(Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++) {
        s->total += s->marks[i];
    }
    s->percentage = s->total / 5.0;
}

void display(Student *s) {
    printf("Roll No: %d\n", s->rollNo);
    for (int i = 0; i < 5; i++) {
        printf("Subject %d Marks: %d\n", i + 1, s->marks[i]);
    }
    printf("Total: %d, Percentage: %.2f\n", s->total, s->percentage);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll number and marks for 5 subjects of student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
        calculate(&students[i]);
    }

    for (int i = 0; i < n; i++) {
        display(&students[i]);
    }

    return 0;
}