//Print the initials of a name.

#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n')
        printf("%c", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n')
            printf("%c", name[i + 1]);
        i++;
    }

    return 0;
}
