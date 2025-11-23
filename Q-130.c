//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[50];
    float marks;

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student details:\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    printf("\nData successfully saved to students.txt!\n");

    fp = fopen("info.txt", "r");

    printf("\nReading records from file:\n");

    printf("\nName\tRoll\tMarks\n");
    printf("-----------------------------\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("%s\t%d\t%.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
