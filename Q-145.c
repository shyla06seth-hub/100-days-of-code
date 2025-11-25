//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return the student with highest marks
struct Student getTopStudent(struct Student arr[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[topIndex].marks) {
            topIndex = i;
        }
    }

    return arr[topIndex];   // returning the structure
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
