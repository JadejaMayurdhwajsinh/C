#include<stdio.h>
struct Student {
    char name[50];
    int id;
    float marks;
};

void displayBelowMarks(struct Student *s, int n, float threshold) {
    printf("Students with marks below %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (s[i].marks < threshold) {
            printf("Name: %s, ID: %d\n", s[i].name, s[i].id);
        }
    }
}

int main() {
    int n;
    float threshold;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, ID, and marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].marks);
    }

    printf("Enter the threshold marks: ");
    scanf("%f", &threshold);

    displayBelowMarks(students, n, threshold);

    return 0;
}