//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    printf("3. Other\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nName: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Invalid gender option\n");
    }

    return 0;
}
