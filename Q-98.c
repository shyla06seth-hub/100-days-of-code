//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char name[200];
    int i = 0, start = 0, last_space = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {
        if (name[i] == ' ')
            last_space = i;
        i++;
    }

    i = 0;
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c ", name[0]);  

    while (name[i] != '\0') {
        if (name[i] == ' ' && i < last_space && name[i + 1] != ' ')
            printf("%c ", name[i + 1]); 
        i++;
    }


    if (last_space != -1) {
        i = last_space + 1;
        while (name[i] != '\0' && name[i] != '\n') {
            printf("%c", name[i]);
            i++;
        }
    }

    return 0;
}
