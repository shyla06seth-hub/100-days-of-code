//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp, empRead;
    int n, i;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("How many employees do you want to store? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp.name);

        printf("ID: ");
        scanf("%d", &emp.id);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);
    printf("\nData successfully written to employee.dat\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Reading Employee Data from File ---\n");

    while (fread(&empRead, sizeof(struct Employee), 1, fp)) {
        printf("\nName: %s\n", empRead.name);
        printf("ID: %d\n", empRead.id);
        printf("Salary: %.2f\n", empRead.salary);
    }

    fclose(fp);

    return 0;
}
